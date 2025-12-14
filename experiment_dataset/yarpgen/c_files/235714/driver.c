#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2130641349;
long long int var_1 = 6485531947461238043LL;
signed char var_2 = (signed char)26;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)37657;
unsigned int var_5 = 2788256257U;
unsigned long long int var_6 = 10202432174076510186ULL;
signed char var_7 = (signed char)91;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)122;
unsigned int var_10 = 3079312461U;
unsigned short var_11 = (unsigned short)51749;
int zero = 0;
unsigned short var_12 = (unsigned short)56409;
signed char var_13 = (signed char)36;
signed char var_14 = (signed char)91;
unsigned char var_15 = (unsigned char)146;
signed char var_16 = (signed char)37;
short var_17 = (short)-2239;
signed char var_18 = (signed char)-56;
int var_19 = 1578394255;
signed char var_20 = (signed char)-18;
int var_21 = 385304077;
unsigned char var_22 = (unsigned char)62;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)11801;
unsigned char var_25 = (unsigned char)20;
unsigned short var_26 = (unsigned short)57451;
_Bool arr_3 [20] [20] ;
_Bool arr_8 [20] ;
int arr_16 [23] [23] ;
_Bool arr_19 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = -137948889;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
