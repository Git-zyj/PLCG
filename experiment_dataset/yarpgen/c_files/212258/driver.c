#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-106;
short var_5 = (short)16060;
unsigned char var_10 = (unsigned char)40;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)20;
int zero = 0;
unsigned int var_16 = 3678911399U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
