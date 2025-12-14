#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
short var_1 = (short)136;
unsigned short var_2 = (unsigned short)20422;
unsigned int var_6 = 447719609U;
unsigned char var_7 = (unsigned char)109;
short var_12 = (short)10793;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 899302536292385969ULL;
unsigned short var_18 = (unsigned short)31505;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
