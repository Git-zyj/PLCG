#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 397981792;
unsigned int var_9 = 3432241980U;
unsigned long long int var_10 = 66836682141845847ULL;
unsigned char var_11 = (unsigned char)156;
int var_15 = 1405174305;
int zero = 0;
unsigned int var_16 = 2008213188U;
int var_17 = 127735248;
unsigned short var_18 = (unsigned short)60282;
signed char var_19 = (signed char)-42;
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
