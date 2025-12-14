#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10285334338417803296ULL;
unsigned int var_2 = 69158646U;
unsigned int var_5 = 2489672816U;
unsigned int var_6 = 4161654438U;
int zero = 0;
unsigned int var_10 = 1545130590U;
unsigned long long int var_11 = 3773012407243697252ULL;
unsigned long long int var_12 = 16631531949587123104ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
