#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7977;
signed char var_8 = (signed char)76;
unsigned long long int var_11 = 5757080077643802632ULL;
signed char var_15 = (signed char)-41;
int zero = 0;
unsigned int var_18 = 2313495089U;
unsigned short var_19 = (unsigned short)42985;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
