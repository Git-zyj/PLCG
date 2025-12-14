#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1976810771U;
int var_3 = 1732224897;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)101;
short var_14 = (short)-4798;
long long int var_15 = 9177719200220758271LL;
unsigned long long int var_16 = 17129093730568177733ULL;
int zero = 0;
short var_17 = (short)5751;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 12004191215534067857ULL;
signed char var_20 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
