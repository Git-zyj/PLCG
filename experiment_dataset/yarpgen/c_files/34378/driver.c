#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1038761682;
short var_5 = (short)-19969;
unsigned short var_12 = (unsigned short)3185;
int zero = 0;
unsigned long long int var_19 = 21423207969102913ULL;
short var_20 = (short)14715;
unsigned int var_21 = 4226104828U;
unsigned short var_22 = (unsigned short)41880;
unsigned char var_23 = (unsigned char)56;
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
