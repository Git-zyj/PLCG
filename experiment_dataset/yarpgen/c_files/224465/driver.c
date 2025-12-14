#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
signed char var_5 = (signed char)108;
signed char var_6 = (signed char)-97;
long long int var_8 = -1161958381072961702LL;
unsigned char var_11 = (unsigned char)242;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)239;
int zero = 0;
int var_20 = -1291323155;
unsigned int var_21 = 2177153347U;
unsigned char var_22 = (unsigned char)96;
signed char var_23 = (signed char)-51;
long long int var_24 = -8934937238818646522LL;
unsigned short var_25 = (unsigned short)11667;
int var_26 = -1904953599;
unsigned short arr_2 [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
unsigned char arr_4 [15] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)16627;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 6760088870879751373ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)150 : (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1768519747 : 492729972;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
