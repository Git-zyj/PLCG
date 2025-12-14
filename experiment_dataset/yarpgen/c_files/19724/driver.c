#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13110177612331691226ULL;
int var_3 = 1637495560;
int var_5 = 2126250045;
short var_6 = (short)2391;
short var_7 = (short)-11799;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 9344632473982026654ULL;
void init() {
}

void checksum() {
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
