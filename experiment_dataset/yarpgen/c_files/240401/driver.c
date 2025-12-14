#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1910365977;
int var_2 = 1004789626;
unsigned char var_8 = (unsigned char)148;
short var_12 = (short)-13706;
short var_14 = (short)-20971;
int zero = 0;
unsigned char var_19 = (unsigned char)78;
unsigned long long int var_20 = 4679274876522611640ULL;
unsigned char var_21 = (unsigned char)119;
unsigned char var_22 = (unsigned char)202;
unsigned char var_23 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
