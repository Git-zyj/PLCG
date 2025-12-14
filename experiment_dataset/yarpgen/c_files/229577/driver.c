#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-75;
unsigned long long int var_4 = 7013428056199927266ULL;
signed char var_11 = (signed char)14;
int zero = 0;
signed char var_14 = (signed char)69;
signed char var_15 = (signed char)-37;
unsigned char var_16 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
