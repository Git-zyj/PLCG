#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1677212929;
unsigned long long int var_1 = 4974773483692201795ULL;
unsigned char var_2 = (unsigned char)47;
signed char var_5 = (signed char)69;
int var_6 = 1009337211;
long long int var_8 = -2634908328185751489LL;
int var_9 = -2007282991;
unsigned short var_10 = (unsigned short)2170;
unsigned int var_12 = 2880005048U;
unsigned long long int var_13 = 14326029992237574834ULL;
int var_14 = -1190509326;
unsigned short var_15 = (unsigned short)47904;
int zero = 0;
unsigned short var_16 = (unsigned short)46657;
signed char var_17 = (signed char)36;
int var_18 = -400028153;
unsigned int var_19 = 3050762138U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2341328803U;
unsigned char arr_1 [17] [17] ;
unsigned short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)22841 : (unsigned short)31066;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
