#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1186297888676220483ULL;
unsigned long long int var_14 = 11609886157810786751ULL;
unsigned char var_15 = (unsigned char)181;
int zero = 0;
signed char var_16 = (signed char)1;
signed char var_17 = (signed char)-127;
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
