#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22797;
unsigned int var_2 = 663778784U;
unsigned short var_5 = (unsigned short)44019;
signed char var_6 = (signed char)24;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2754285529U;
unsigned int var_11 = 3581668766U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)242;
unsigned int var_14 = 1375933922U;
unsigned short var_15 = (unsigned short)38841;
short var_16 = (short)1196;
unsigned char var_17 = (unsigned char)148;
unsigned int var_18 = 740302636U;
unsigned short var_19 = (unsigned short)16728;
unsigned char var_20 = (unsigned char)134;
unsigned char var_21 = (unsigned char)101;
signed char var_22 = (signed char)-73;
signed char var_23 = (signed char)14;
signed char var_24 = (signed char)31;
short var_25 = (short)-21283;
long long int var_26 = -7275383998794036012LL;
short var_27 = (short)26138;
short var_28 = (short)22333;
int arr_0 [13] ;
unsigned char arr_1 [13] [13] ;
signed char arr_14 [18] [18] ;
unsigned long long int arr_16 [18] ;
short arr_17 [18] [18] ;
unsigned short arr_21 [18] [18] [18] [18] ;
unsigned int arr_22 [18] [18] ;
_Bool arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1402321080;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = 10034555331533126007ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (short)7652;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)20011 : (unsigned short)58252;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = 2713604293U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
