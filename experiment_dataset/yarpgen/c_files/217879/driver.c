#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)0;
signed char var_10 = (signed char)65;
unsigned int var_16 = 1549371852U;
int zero = 0;
unsigned long long int var_17 = 15328817539508203226ULL;
signed char var_18 = (signed char)-41;
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
