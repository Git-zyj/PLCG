#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16314;
unsigned char var_1 = (unsigned char)240;
signed char var_2 = (signed char)60;
short var_3 = (short)8786;
int var_4 = -1423791487;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-16364;
short var_8 = (short)-17295;
unsigned int var_9 = 796277550U;
int var_10 = -805337352;
short var_14 = (short)-20587;
unsigned char var_17 = (unsigned char)253;
unsigned int var_18 = 2624776484U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)17406;
short var_22 = (short)20408;
int var_23 = -632441853;
unsigned char var_24 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
