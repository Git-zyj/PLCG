#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
int var_3 = 1194286715;
int var_4 = 68522841;
short var_11 = (short)-32235;
signed char var_12 = (signed char)122;
int zero = 0;
int var_13 = -463640422;
short var_14 = (short)-2975;
int var_15 = -1085852735;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
