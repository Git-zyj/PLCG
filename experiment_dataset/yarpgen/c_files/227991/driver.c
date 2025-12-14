#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2328641235U;
unsigned char var_2 = (unsigned char)149;
unsigned int var_3 = 4042227250U;
signed char var_8 = (signed char)-90;
unsigned int var_9 = 4252010536U;
unsigned short var_10 = (unsigned short)56170;
unsigned short var_12 = (unsigned short)36629;
int zero = 0;
unsigned short var_13 = (unsigned short)22750;
signed char var_14 = (signed char)57;
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
