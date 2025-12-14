#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1905681943;
_Bool var_5 = (_Bool)1;
short var_6 = (short)6747;
int var_7 = -315420822;
unsigned long long int var_8 = 11220300038077436982ULL;
unsigned char var_11 = (unsigned char)160;
int zero = 0;
signed char var_12 = (signed char)54;
signed char var_13 = (signed char)-42;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14184694801695756959ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
