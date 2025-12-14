#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 5132931691091531718ULL;
unsigned long long int var_6 = 1251444142284697067ULL;
unsigned long long int var_8 = 9538402977628738357ULL;
short var_9 = (short)13459;
int zero = 0;
int var_11 = -1757080560;
short var_12 = (short)-17603;
short var_13 = (short)25165;
unsigned int var_14 = 2092284470U;
int var_15 = -1745030517;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
