#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-122;
unsigned char var_5 = (unsigned char)10;
long long int var_6 = -6953167708094269523LL;
signed char var_7 = (signed char)96;
unsigned long long int var_8 = 5230537179589090038ULL;
long long int var_9 = 977735429254264789LL;
int zero = 0;
unsigned short var_10 = (unsigned short)18024;
long long int var_11 = 8136689293345496549LL;
unsigned long long int var_12 = 13396681404196914570ULL;
unsigned char var_13 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
