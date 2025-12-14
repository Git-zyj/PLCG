#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2702466912068851782ULL;
unsigned long long int var_7 = 16366687302593783640ULL;
unsigned long long int var_8 = 5609334211358181894ULL;
int var_9 = 1506839067;
int zero = 0;
unsigned char var_10 = (unsigned char)190;
short var_11 = (short)5549;
unsigned char var_12 = (unsigned char)242;
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
