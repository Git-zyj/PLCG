#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 222607790U;
long long int var_3 = -487859950428082027LL;
signed char var_4 = (signed char)-83;
int zero = 0;
long long int var_11 = 174642502087391529LL;
unsigned int var_12 = 463319549U;
void init() {
}

void checksum() {
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
