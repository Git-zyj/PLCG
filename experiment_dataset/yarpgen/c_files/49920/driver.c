#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4386;
unsigned char var_1 = (unsigned char)83;
signed char var_2 = (signed char)28;
unsigned short var_3 = (unsigned short)26865;
short var_7 = (short)-19713;
int zero = 0;
unsigned long long int var_10 = 1062200723186643694ULL;
unsigned char var_11 = (unsigned char)123;
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
