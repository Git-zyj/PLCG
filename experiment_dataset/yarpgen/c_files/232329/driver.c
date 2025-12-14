#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1827217368;
unsigned int var_6 = 3945980839U;
unsigned long long int var_9 = 17238502403415204839ULL;
int zero = 0;
unsigned long long int var_10 = 9149260914523882321ULL;
unsigned long long int var_11 = 14435961509098749722ULL;
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
