#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1891487019;
unsigned char var_1 = (unsigned char)155;
int var_3 = 1621793806;
long long int var_4 = -9081520726567287953LL;
unsigned short var_6 = (unsigned short)53911;
unsigned short var_7 = (unsigned short)14723;
long long int var_8 = 6195692822804558467LL;
unsigned char var_14 = (unsigned char)108;
unsigned char var_15 = (unsigned char)233;
unsigned int var_17 = 2888542551U;
unsigned char var_18 = (unsigned char)98;
int zero = 0;
int var_20 = 531649322;
long long int var_21 = -8114416936891015682LL;
long long int var_22 = -3001682819846587726LL;
long long int var_23 = 5007771094948224721LL;
signed char var_24 = (signed char)22;
int var_25 = 247713845;
unsigned char var_26 = (unsigned char)28;
int var_27 = -592483434;
unsigned char arr_0 [16] ;
unsigned short arr_1 [16] ;
unsigned short arr_2 [16] ;
unsigned char arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)26623;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)39220;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)71 : (unsigned char)108;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
