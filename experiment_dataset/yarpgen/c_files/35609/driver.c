#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12991593685909961155ULL;
short var_4 = (short)-12172;
unsigned long long int var_5 = 6604703047846447417ULL;
unsigned char var_8 = (unsigned char)133;
short var_10 = (short)-20999;
unsigned char var_11 = (unsigned char)118;
unsigned short var_12 = (unsigned short)20697;
unsigned int var_13 = 1108087167U;
int zero = 0;
long long int var_14 = -5414961778973986787LL;
short var_15 = (short)25236;
signed char var_16 = (signed char)-45;
long long int var_17 = -7862552085294147046LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
