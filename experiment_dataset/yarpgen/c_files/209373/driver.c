#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)28098;
short var_3 = (short)32310;
long long int var_9 = -2021163939159115640LL;
unsigned int var_11 = 3937990286U;
unsigned char var_14 = (unsigned char)246;
unsigned int var_15 = 4200329118U;
int zero = 0;
long long int var_16 = -9042346534330062728LL;
unsigned long long int var_17 = 18182561298441275642ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 362737199999178298ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
