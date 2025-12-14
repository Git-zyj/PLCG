#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1651672273188834406LL;
int var_5 = -1702811491;
unsigned long long int var_6 = 16634717955789145182ULL;
int var_9 = -1115291258;
short var_10 = (short)-31833;
signed char var_16 = (signed char)-12;
signed char var_18 = (signed char)100;
int zero = 0;
long long int var_19 = 7622299099374938824LL;
unsigned int var_20 = 1392148307U;
_Bool var_21 = (_Bool)0;
int var_22 = -1730492749;
_Bool var_23 = (_Bool)0;
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
