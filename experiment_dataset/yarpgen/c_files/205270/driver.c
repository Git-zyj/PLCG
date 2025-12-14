#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
_Bool var_1 = (_Bool)1;
signed char var_6 = (signed char)-38;
unsigned int var_7 = 1230039886U;
signed char var_8 = (signed char)-16;
signed char var_10 = (signed char)-122;
int zero = 0;
unsigned char var_11 = (unsigned char)150;
unsigned char var_12 = (unsigned char)117;
unsigned char var_13 = (unsigned char)202;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 14866285696468223120ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
