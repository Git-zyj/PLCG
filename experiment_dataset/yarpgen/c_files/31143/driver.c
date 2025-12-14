#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
int var_1 = -421638447;
unsigned int var_6 = 183222138U;
unsigned short var_9 = (unsigned short)37295;
unsigned short var_11 = (unsigned short)51604;
int var_12 = -1327909369;
int var_13 = 1332729107;
signed char var_14 = (signed char)-75;
unsigned short var_15 = (unsigned short)13585;
int zero = 0;
unsigned char var_17 = (unsigned char)230;
unsigned int var_18 = 4050139628U;
int var_19 = -2121243610;
unsigned char var_20 = (unsigned char)100;
int var_21 = 1776695498;
unsigned int var_22 = 2705559795U;
unsigned int var_23 = 1918488345U;
int var_24 = -22553181;
int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -795945654;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
