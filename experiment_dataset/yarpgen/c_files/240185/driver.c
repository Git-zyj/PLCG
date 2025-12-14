#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56069;
unsigned long long int var_3 = 11679070697849381346ULL;
short var_4 = (short)-342;
unsigned long long int var_7 = 6604796634278736727ULL;
signed char var_11 = (signed char)120;
int zero = 0;
unsigned char var_12 = (unsigned char)150;
int var_13 = -146041090;
unsigned char var_14 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
