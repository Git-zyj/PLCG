#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned long long int var_1 = 2130840131706500318ULL;
unsigned int var_2 = 1221312540U;
unsigned short var_3 = (unsigned short)32442;
unsigned long long int var_4 = 14270122231025140439ULL;
int var_6 = -930514337;
signed char var_8 = (signed char)-25;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)58456;
int var_11 = 194512298;
unsigned long long int var_12 = 12281372811354554866ULL;
int zero = 0;
signed char var_13 = (signed char)-24;
signed char var_14 = (signed char)-58;
unsigned int var_15 = 2149777905U;
signed char var_16 = (signed char)125;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
