#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20908;
signed char var_2 = (signed char)80;
int var_3 = -1208735528;
int var_4 = -1654023136;
signed char var_5 = (signed char)39;
long long int var_7 = -1426111547947548179LL;
unsigned char var_8 = (unsigned char)5;
long long int var_10 = 841232572262692436LL;
short var_12 = (short)-18727;
unsigned int var_16 = 3134168007U;
int zero = 0;
int var_18 = 143736507;
unsigned char var_19 = (unsigned char)201;
unsigned int var_20 = 1845989693U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1865414746U;
short var_23 = (short)-12472;
short var_24 = (short)-4230;
long long int var_25 = -13882898810762479LL;
int var_26 = 1698434735;
_Bool arr_0 [19] ;
short arr_2 [19] ;
signed char arr_3 [19] ;
unsigned char arr_6 [15] ;
long long int arr_8 [15] [15] ;
_Bool arr_10 [15] [15] ;
short arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)27592;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = -77724451937745920LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (short)27663;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
