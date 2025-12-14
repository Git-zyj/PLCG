#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)144;
short var_1 = (short)15092;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 9728113977927386366ULL;
unsigned int var_6 = 1950311805U;
unsigned char var_7 = (unsigned char)90;
_Bool var_10 = (_Bool)1;
int var_11 = -1789947253;
short var_12 = (short)12950;
int zero = 0;
unsigned char var_13 = (unsigned char)194;
unsigned char var_14 = (unsigned char)147;
void init() {
}

void checksum() {
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
