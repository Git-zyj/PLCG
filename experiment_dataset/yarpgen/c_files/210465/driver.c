#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4257861183U;
unsigned int var_3 = 3350220168U;
unsigned int var_4 = 2495194940U;
unsigned short var_7 = (unsigned short)9032;
signed char var_9 = (signed char)-53;
signed char var_10 = (signed char)-55;
unsigned long long int var_12 = 12864390051659439551ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)238;
unsigned int var_14 = 2083341662U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
