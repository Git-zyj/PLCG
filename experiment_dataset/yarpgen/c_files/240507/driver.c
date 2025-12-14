#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2722120078338336122ULL;
short var_3 = (short)8948;
int var_4 = -2021359952;
long long int var_5 = -2605782403574108151LL;
long long int var_6 = -3329768530583620109LL;
unsigned long long int var_10 = 8786240189286883682ULL;
unsigned short var_11 = (unsigned short)22854;
signed char var_17 = (signed char)43;
int zero = 0;
long long int var_18 = 9049278766092427806LL;
unsigned long long int var_19 = 3416654272764621598ULL;
unsigned int var_20 = 2402602790U;
void init() {
}

void checksum() {
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
