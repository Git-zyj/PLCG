#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -142055587;
unsigned char var_1 = (unsigned char)77;
unsigned long long int var_2 = 16170457558347224231ULL;
unsigned long long int var_3 = 11461904101792740449ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
short var_13 = (short)-18531;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
