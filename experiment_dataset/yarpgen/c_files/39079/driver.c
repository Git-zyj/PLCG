#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3310441769142250343ULL;
unsigned short var_2 = (unsigned short)22612;
unsigned short var_5 = (unsigned short)30257;
_Bool var_8 = (_Bool)0;
long long int var_12 = -8769675226461465165LL;
int zero = 0;
short var_13 = (short)-17635;
int var_14 = 7972984;
unsigned long long int var_15 = 7969079690899735824ULL;
unsigned long long int var_16 = 10323545135942520858ULL;
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
