#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5196152401326122467LL;
unsigned int var_8 = 4269709324U;
short var_14 = (short)-5127;
unsigned long long int var_15 = 8784669559403260011ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)42390;
short var_17 = (short)20016;
signed char var_18 = (signed char)-91;
unsigned long long int var_19 = 14522359023416980069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
