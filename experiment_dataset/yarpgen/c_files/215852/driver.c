#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)116;
_Bool var_2 = (_Bool)0;
long long int var_5 = 2348498173763197155LL;
unsigned char var_6 = (unsigned char)123;
short var_8 = (short)7583;
unsigned char var_11 = (unsigned char)67;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)11262;
unsigned int var_16 = 675009441U;
unsigned short var_17 = (unsigned short)48163;
short var_18 = (short)-20825;
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
