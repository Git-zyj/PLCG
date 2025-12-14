#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29191;
signed char var_3 = (signed char)-8;
signed char var_4 = (signed char)103;
unsigned short var_11 = (unsigned short)23060;
unsigned int var_19 = 2353865283U;
int zero = 0;
unsigned char var_20 = (unsigned char)129;
unsigned char var_21 = (unsigned char)95;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)43749;
void init() {
}

void checksum() {
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
