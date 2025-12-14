#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
unsigned short var_1 = (unsigned short)5019;
unsigned short var_3 = (unsigned short)63328;
unsigned char var_4 = (unsigned char)119;
short var_5 = (short)2797;
_Bool var_6 = (_Bool)0;
long long int var_7 = -3966101030410638651LL;
unsigned long long int var_8 = 13797323182260374014ULL;
unsigned long long int var_9 = 18300213780083137248ULL;
int zero = 0;
signed char var_10 = (signed char)94;
signed char var_11 = (signed char)91;
unsigned char var_12 = (unsigned char)48;
unsigned short var_13 = (unsigned short)1622;
short var_14 = (short)25191;
unsigned short arr_1 [17] ;
unsigned short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)35225;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)2987;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
