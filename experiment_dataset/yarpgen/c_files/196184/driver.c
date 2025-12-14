#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
long long int var_1 = 5714144612928939518LL;
unsigned int var_2 = 3340522895U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_5 = -3551096372431534786LL;
unsigned long long int var_6 = 7738518836911595041ULL;
int var_9 = 2037328706;
long long int var_10 = -8926850995936849720LL;
long long int var_12 = -2102224885860049899LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -2740957358103528647LL;
long long int var_15 = 8945940036643154548LL;
unsigned int var_16 = 3907764365U;
unsigned long long int var_17 = 8934296646266120195ULL;
long long int var_18 = -8394954129842489701LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
