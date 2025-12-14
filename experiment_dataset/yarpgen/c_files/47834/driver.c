#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 12705507578793249750ULL;
unsigned short var_11 = (unsigned short)28796;
signed char var_12 = (signed char)113;
int zero = 0;
unsigned long long int var_17 = 13481588263758730273ULL;
unsigned long long int var_18 = 17038882881547491065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
