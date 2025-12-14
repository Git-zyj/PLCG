#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 929086211U;
unsigned char var_3 = (unsigned char)95;
int var_7 = -1984157295;
long long int var_11 = 7136273496339254717LL;
unsigned int var_12 = 216507793U;
unsigned short var_13 = (unsigned short)55646;
unsigned int var_14 = 2478868989U;
int zero = 0;
unsigned short var_16 = (unsigned short)10193;
unsigned int var_17 = 2978276412U;
short var_18 = (short)562;
void init() {
}

void checksum() {
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
