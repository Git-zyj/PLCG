#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)31;
unsigned char var_8 = (unsigned char)192;
unsigned char var_10 = (unsigned char)194;
signed char var_11 = (signed char)124;
signed char var_12 = (signed char)18;
signed char var_14 = (signed char)-66;
int zero = 0;
long long int var_15 = 3045804284696067113LL;
unsigned long long int var_16 = 1664797690237796970ULL;
unsigned int var_17 = 2024563689U;
unsigned char var_18 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
