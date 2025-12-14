#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
_Bool var_2 = (_Bool)1;
unsigned int var_6 = 215589085U;
short var_11 = (short)11807;
unsigned int var_12 = 1561850668U;
short var_14 = (short)31369;
unsigned char var_15 = (unsigned char)98;
int zero = 0;
short var_18 = (short)28230;
unsigned char var_19 = (unsigned char)111;
unsigned short var_20 = (unsigned short)19191;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
