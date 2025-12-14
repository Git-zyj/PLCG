#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_8 = 1175167823671310442LL;
unsigned short var_9 = (unsigned short)12455;
unsigned long long int var_11 = 5302627415604872129ULL;
int var_13 = 1467079052;
int var_15 = 1538362384;
long long int var_16 = 6683524501700783089LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 308115252U;
unsigned int var_19 = 254103337U;
unsigned short var_20 = (unsigned short)7067;
void init() {
}

void checksum() {
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
