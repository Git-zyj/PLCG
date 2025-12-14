#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-112;
signed char var_8 = (signed char)-75;
unsigned short var_9 = (unsigned short)5665;
int zero = 0;
unsigned long long int var_14 = 14864242340043457973ULL;
unsigned long long int var_15 = 11312590812000252220ULL;
unsigned short var_16 = (unsigned short)59551;
unsigned long long int var_17 = 17927173986235787846ULL;
void init() {
}

void checksum() {
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
