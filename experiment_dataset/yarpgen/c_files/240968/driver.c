#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14567530355504629747ULL;
unsigned short var_1 = (unsigned short)51834;
signed char var_2 = (signed char)32;
signed char var_5 = (signed char)-76;
unsigned long long int var_6 = 14449152814759539282ULL;
unsigned int var_7 = 3438498801U;
signed char var_8 = (signed char)116;
unsigned int var_9 = 953914573U;
unsigned short var_10 = (unsigned short)15740;
signed char var_12 = (signed char)-76;
int zero = 0;
signed char var_13 = (signed char)-8;
unsigned short var_14 = (unsigned short)24996;
unsigned short var_15 = (unsigned short)16254;
unsigned long long int var_16 = 12138357972629178905ULL;
unsigned long long int var_17 = 1027710162358383503ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
