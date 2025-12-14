#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 348896233U;
unsigned char var_6 = (unsigned char)180;
unsigned char var_8 = (unsigned char)30;
unsigned long long int var_11 = 9237215769093148956ULL;
unsigned long long int var_12 = 860098528281053755ULL;
short var_13 = (short)-24235;
long long int var_14 = 1711174975955882064LL;
int zero = 0;
unsigned short var_15 = (unsigned short)46802;
signed char var_16 = (signed char)73;
unsigned char var_17 = (unsigned char)211;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 4280126217370688600ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1729740138U;
unsigned char var_22 = (unsigned char)159;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
