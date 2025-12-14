#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 357168857U;
unsigned char var_1 = (unsigned char)165;
unsigned int var_2 = 3619395827U;
unsigned long long int var_8 = 4103872082382300529ULL;
unsigned long long int var_12 = 13728259290193730612ULL;
int zero = 0;
unsigned int var_15 = 2139081520U;
unsigned int var_16 = 3471846127U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
