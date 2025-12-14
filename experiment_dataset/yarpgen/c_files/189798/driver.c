#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10807;
unsigned char var_4 = (unsigned char)164;
short var_5 = (short)-10289;
signed char var_7 = (signed char)99;
unsigned long long int var_8 = 18124242112836974862ULL;
_Bool var_9 = (_Bool)1;
long long int var_12 = 2569606197172534948LL;
long long int var_14 = 2998000660966293981LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4278154152U;
long long int var_18 = 3436755849308028456LL;
int zero = 0;
long long int var_19 = -8107410011104745845LL;
int var_20 = -268840292;
void init() {
}

void checksum() {
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
