#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15284;
unsigned short var_1 = (unsigned short)546;
signed char var_2 = (signed char)-15;
unsigned char var_3 = (unsigned char)167;
int var_5 = 847222428;
unsigned char var_6 = (unsigned char)61;
unsigned long long int var_7 = 4064619639462733972ULL;
int zero = 0;
unsigned long long int var_10 = 17119177917866438460ULL;
signed char var_11 = (signed char)-23;
unsigned short var_12 = (unsigned short)29056;
short var_13 = (short)-27641;
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
