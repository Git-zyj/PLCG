#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1065986005U;
unsigned long long int var_5 = 458363254130629054ULL;
long long int var_7 = 5373713935234570864LL;
unsigned int var_9 = 2188297124U;
unsigned int var_16 = 194539684U;
int zero = 0;
unsigned long long int var_17 = 5433450481021588262ULL;
signed char var_18 = (signed char)-25;
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
