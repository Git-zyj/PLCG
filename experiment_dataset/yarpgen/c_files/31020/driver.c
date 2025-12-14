#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8497009085755045430LL;
unsigned long long int var_3 = 6111041034577840635ULL;
long long int var_5 = 6789039243911669741LL;
unsigned char var_7 = (unsigned char)6;
unsigned int var_8 = 3901278833U;
short var_15 = (short)-1637;
int zero = 0;
unsigned short var_16 = (unsigned short)61176;
unsigned short var_17 = (unsigned short)5057;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
