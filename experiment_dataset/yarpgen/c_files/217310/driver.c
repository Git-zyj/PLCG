#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)29067;
long long int var_7 = -7287495806400191846LL;
unsigned long long int var_8 = 3315772165613659952ULL;
unsigned long long int var_9 = 10005246689581863087ULL;
unsigned long long int var_10 = 6821991580381967331ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)40290;
unsigned short var_12 = (unsigned short)42128;
short var_13 = (short)8298;
unsigned long long int var_14 = 7969159420034576168ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
