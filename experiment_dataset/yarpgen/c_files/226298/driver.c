#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17802406200538149404ULL;
unsigned short var_1 = (unsigned short)18983;
unsigned int var_2 = 1409224035U;
short var_3 = (short)6975;
int var_4 = 950043080;
unsigned char var_5 = (unsigned char)80;
unsigned long long int var_6 = 5542879830736611703ULL;
unsigned int var_9 = 2944405414U;
int var_11 = -1119093013;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1447737802;
short var_14 = (short)17520;
short var_15 = (short)-19082;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
