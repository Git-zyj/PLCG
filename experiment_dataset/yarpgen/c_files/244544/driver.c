#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
signed char var_1 = (signed char)-95;
unsigned int var_2 = 898011181U;
unsigned short var_7 = (unsigned short)43697;
int zero = 0;
signed char var_10 = (signed char)-79;
short var_11 = (short)31916;
int var_12 = 1702607573;
unsigned char var_13 = (unsigned char)15;
unsigned int var_14 = 2303404106U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
