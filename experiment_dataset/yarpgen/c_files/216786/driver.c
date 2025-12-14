#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29098;
short var_2 = (short)30591;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-32760;
unsigned char var_14 = (unsigned char)10;
int zero = 0;
unsigned long long int var_15 = 14828001235523000907ULL;
unsigned int var_16 = 1195464434U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
