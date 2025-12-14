#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3752;
short var_2 = (short)-5876;
short var_3 = (short)25651;
unsigned char var_4 = (unsigned char)145;
unsigned int var_5 = 1413467292U;
unsigned long long int var_6 = 18418190464832761746ULL;
int var_8 = -1559109704;
unsigned long long int var_13 = 14626020692345450047ULL;
int var_14 = 1145467242;
unsigned long long int var_15 = 9031162858917229417ULL;
long long int var_17 = 9105440130157473624LL;
int zero = 0;
int var_18 = -1165879670;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8416730034519349969LL;
unsigned short var_21 = (unsigned short)38322;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
