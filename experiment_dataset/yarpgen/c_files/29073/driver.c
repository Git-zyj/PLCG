#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52654;
unsigned char var_4 = (unsigned char)41;
unsigned char var_6 = (unsigned char)97;
int var_9 = -538749155;
short var_10 = (short)-15957;
unsigned char var_11 = (unsigned char)179;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)7913;
unsigned int var_16 = 136066549U;
unsigned char var_17 = (unsigned char)229;
unsigned short var_18 = (unsigned short)46757;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
