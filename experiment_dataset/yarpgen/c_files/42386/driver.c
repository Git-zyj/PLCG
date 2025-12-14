#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)89;
long long int var_6 = 3051529243101115298LL;
short var_8 = (short)-16733;
signed char var_10 = (signed char)58;
unsigned char var_14 = (unsigned char)20;
short var_15 = (short)29327;
long long int var_18 = -7093198286822387550LL;
int zero = 0;
long long int var_19 = -1124807136014891277LL;
long long int var_20 = -7979367457182739927LL;
short var_21 = (short)7564;
signed char var_22 = (signed char)123;
unsigned int var_23 = 1225982995U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
