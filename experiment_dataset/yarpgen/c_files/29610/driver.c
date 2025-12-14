#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
signed char var_1 = (signed char)-70;
unsigned long long int var_5 = 14644430725427014513ULL;
unsigned long long int var_7 = 18123008937360720228ULL;
int zero = 0;
signed char var_12 = (signed char)-49;
signed char var_13 = (signed char)-27;
signed char var_14 = (signed char)-54;
int var_15 = -2134252197;
unsigned long long int var_16 = 6467500830459426476ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
