#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
unsigned char var_2 = (unsigned char)33;
int var_3 = 194881814;
unsigned char var_4 = (unsigned char)27;
unsigned int var_5 = 1440376005U;
unsigned short var_7 = (unsigned short)9440;
unsigned long long int var_8 = 1945174265947696895ULL;
short var_9 = (short)-3112;
signed char var_10 = (signed char)65;
int zero = 0;
long long int var_11 = 5651610571293923992LL;
short var_12 = (short)4033;
unsigned int var_13 = 2738136163U;
int var_14 = -230016810;
unsigned long long int var_15 = 11166564619755092051ULL;
signed char var_16 = (signed char)-7;
int var_17 = 1326518859;
int var_18 = -441279839;
signed char var_19 = (signed char)112;
int var_20 = -1620223214;
unsigned long long int var_21 = 15824785683614077472ULL;
long long int var_22 = 2098738719807960002LL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)124;
int var_25 = -1036031885;
unsigned int var_26 = 690437984U;
unsigned long long int var_27 = 5988747019659959672ULL;
short var_28 = (short)-19909;
long long int var_29 = 8419787564847436622LL;
unsigned long long int var_30 = 507099958967300899ULL;
unsigned short var_31 = (unsigned short)51995;
int var_32 = -777351797;
int arr_0 [24] ;
signed char arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
int arr_3 [24] ;
int arr_4 [24] [24] [24] ;
signed char arr_7 [24] [24] ;
int arr_9 [24] ;
unsigned short arr_10 [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_19 [24] [24] [24] [24] [24] [24] ;
short arr_21 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 325259124;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)26955;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -287997679;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1552912795;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = -1432343636;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)24713;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7215282798024548479ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-13527;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
