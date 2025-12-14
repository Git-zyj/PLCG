#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1665172624724898210LL;
unsigned long long int var_9 = 5946750564513310850ULL;
unsigned long long int var_11 = 8793553462609511626ULL;
int zero = 0;
int var_16 = 2002398735;
unsigned long long int var_17 = 8596910791788206323ULL;
int var_18 = 1851358833;
unsigned char var_19 = (unsigned char)170;
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
