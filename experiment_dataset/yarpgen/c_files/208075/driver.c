#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49843;
unsigned long long int var_2 = 4128126592828600111ULL;
unsigned int var_4 = 2914115796U;
int var_5 = -1171092277;
int var_6 = 679062037;
int var_7 = -2135817657;
signed char var_8 = (signed char)-33;
unsigned int var_9 = 246633350U;
int zero = 0;
signed char var_10 = (signed char)-44;
_Bool var_11 = (_Bool)0;
long long int var_12 = 8692854131202914156LL;
unsigned int var_13 = 12333579U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
