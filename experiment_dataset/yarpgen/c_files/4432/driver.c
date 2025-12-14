#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 848686023;
int var_1 = 1414442287;
unsigned short var_2 = (unsigned short)24950;
short var_3 = (short)13572;
unsigned int var_6 = 575709174U;
int var_9 = 769606084;
signed char var_10 = (signed char)-30;
_Bool var_12 = (_Bool)1;
long long int var_13 = 8916611034904946929LL;
unsigned short var_14 = (unsigned short)16792;
signed char var_15 = (signed char)-16;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2617677187U;
int var_18 = -2107978469;
unsigned int var_19 = 1782158833U;
long long int var_20 = 3950930504547631616LL;
long long int var_21 = 2241500368853751305LL;
short var_22 = (short)18587;
unsigned short var_23 = (unsigned short)47712;
unsigned long long int var_24 = 3730765915218337462ULL;
int var_25 = 1581048588;
unsigned int var_26 = 3255769526U;
int var_27 = -435817533;
long long int var_28 = -8854569712872407891LL;
long long int var_29 = 1726877166425587897LL;
int arr_0 [11] [11] ;
unsigned short arr_1 [11] ;
int arr_3 [11] [11] ;
unsigned int arr_5 [11] ;
unsigned short arr_4 [11] [11] ;
long long int arr_8 [11] [11] ;
_Bool arr_9 [11] ;
short arr_14 [11] [11] ;
signed char arr_20 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -367220604;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)39434;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -798833510;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 2649926976U : 3813180147U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)15255;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -2708756962748745186LL : -8365053950858214135LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-14490;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)93 : (signed char)-33;
}

void checksum() {
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
