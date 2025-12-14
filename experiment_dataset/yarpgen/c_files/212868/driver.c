#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-9;
unsigned short var_5 = (unsigned short)54875;
long long int var_6 = -647345564534912714LL;
signed char var_7 = (signed char)59;
unsigned short var_8 = (unsigned short)48930;
unsigned char var_9 = (unsigned char)40;
unsigned char var_10 = (unsigned char)123;
unsigned short var_11 = (unsigned short)59497;
short var_12 = (short)-7119;
int zero = 0;
long long int var_15 = -1352616399925884511LL;
unsigned char var_16 = (unsigned char)230;
signed char var_17 = (signed char)-97;
signed char var_18 = (signed char)19;
unsigned long long int var_19 = 15729687874386116300ULL;
signed char var_20 = (signed char)90;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 11509293058945984293ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 17837344770370611962ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
