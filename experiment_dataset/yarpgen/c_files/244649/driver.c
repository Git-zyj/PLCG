#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
_Bool var_1 = (_Bool)0;
int var_3 = -1812840022;
unsigned int var_4 = 460749776U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)49542;
long long int var_13 = -2560089504346587139LL;
int var_14 = 2089336131;
unsigned char var_16 = (unsigned char)232;
int zero = 0;
long long int var_19 = -5712631955831650955LL;
short var_20 = (short)-6819;
signed char var_21 = (signed char)-40;
unsigned int var_22 = 1229697767U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
