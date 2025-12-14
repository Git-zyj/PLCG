#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
unsigned long long int var_1 = 342280839026925449ULL;
unsigned long long int var_5 = 7789414488520874518ULL;
int zero = 0;
unsigned long long int var_10 = 11596059622082344560ULL;
short var_11 = (short)-18637;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
