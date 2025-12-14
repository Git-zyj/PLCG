#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-17;
long long int var_5 = 8984071980977117529LL;
unsigned long long int var_14 = 6381954672924491714ULL;
int zero = 0;
unsigned long long int var_18 = 16829595041661197322ULL;
int var_19 = -1129126311;
short var_20 = (short)-23256;
unsigned long long int var_21 = 3776426904222109588ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
