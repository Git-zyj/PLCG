#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11129;
signed char var_1 = (signed char)72;
signed char var_3 = (signed char)8;
unsigned char var_4 = (unsigned char)199;
signed char var_6 = (signed char)111;
short var_7 = (short)-27177;
signed char var_8 = (signed char)-56;
_Bool var_9 = (_Bool)1;
long long int var_11 = -8641820816609858827LL;
int zero = 0;
signed char var_12 = (signed char)68;
unsigned int var_13 = 1080497914U;
unsigned int var_14 = 685112154U;
signed char var_15 = (signed char)-36;
short var_16 = (short)-15870;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
