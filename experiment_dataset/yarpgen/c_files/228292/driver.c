#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -236333314;
unsigned char var_1 = (unsigned char)255;
unsigned short var_3 = (unsigned short)31481;
unsigned char var_4 = (unsigned char)99;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 3982953965U;
unsigned char var_11 = (unsigned char)102;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = -7997567762370076499LL;
unsigned char var_15 = (unsigned char)54;
unsigned char var_16 = (unsigned char)104;
short var_17 = (short)18047;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
