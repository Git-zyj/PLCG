#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12729730435827175282ULL;
unsigned long long int var_15 = 14198016125420343590ULL;
int zero = 0;
unsigned long long int var_16 = 17394045477382107130ULL;
unsigned int var_17 = 3362499194U;
void init() {
}

void checksum() {
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
