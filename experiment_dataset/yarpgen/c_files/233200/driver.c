#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6590553615530561103LL;
short var_1 = (short)8034;
unsigned char var_2 = (unsigned char)100;
unsigned long long int var_4 = 11479089245527765134ULL;
short var_5 = (short)28051;
unsigned long long int var_6 = 9333680592540518313ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15502477699931313307ULL;
short var_9 = (short)12727;
unsigned char var_11 = (unsigned char)163;
unsigned long long int var_14 = 932742086927600123ULL;
short var_15 = (short)20860;
int zero = 0;
unsigned int var_16 = 475474120U;
int var_17 = -963985811;
unsigned int var_18 = 3812152723U;
unsigned long long int var_19 = 3465212410628498986ULL;
int var_20 = -1103962647;
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
