#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-84;
long long int var_6 = -2906727578310872961LL;
unsigned short var_8 = (unsigned short)28759;
long long int var_11 = 7344835313064377414LL;
signed char var_13 = (signed char)62;
unsigned int var_14 = 1071357634U;
unsigned char var_19 = (unsigned char)238;
int zero = 0;
signed char var_20 = (signed char)67;
unsigned long long int var_21 = 12661661469240991623ULL;
unsigned int var_22 = 1486655686U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
