#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5766898929752833604ULL;
unsigned long long int var_10 = 10952524983314816891ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)26066;
unsigned long long int var_19 = 5610870119937403917ULL;
short var_20 = (short)9003;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
