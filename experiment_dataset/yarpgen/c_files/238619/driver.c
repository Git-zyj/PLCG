#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
unsigned short var_3 = (unsigned short)28986;
unsigned char var_4 = (unsigned char)98;
signed char var_6 = (signed char)-105;
signed char var_7 = (signed char)44;
unsigned int var_8 = 3038038362U;
int zero = 0;
unsigned int var_11 = 899921371U;
unsigned char var_12 = (unsigned char)97;
unsigned int var_13 = 249654885U;
void init() {
}

void checksum() {
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
