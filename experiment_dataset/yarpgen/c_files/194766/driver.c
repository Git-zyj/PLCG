#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1806535539;
unsigned int var_2 = 3711835139U;
unsigned short var_3 = (unsigned short)29316;
long long int var_4 = 9188050170205426334LL;
unsigned long long int var_8 = 18426204808677781987ULL;
unsigned long long int var_9 = 14271454596843891882ULL;
int zero = 0;
short var_11 = (short)-11896;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
