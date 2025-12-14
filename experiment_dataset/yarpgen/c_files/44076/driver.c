#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62515;
unsigned char var_1 = (unsigned char)98;
unsigned short var_2 = (unsigned short)10203;
short var_3 = (short)13323;
short var_4 = (short)-12040;
unsigned char var_5 = (unsigned char)21;
short var_6 = (short)21781;
unsigned long long int var_7 = 7013659708068189991ULL;
long long int var_8 = -6887075626911401625LL;
unsigned short var_9 = (unsigned short)48384;
short var_10 = (short)-1713;
signed char var_11 = (signed char)-33;
unsigned char var_12 = (unsigned char)21;
unsigned long long int var_13 = 9073744783706538946ULL;
unsigned char var_14 = (unsigned char)88;
signed char var_16 = (signed char)-85;
unsigned short var_17 = (unsigned short)18468;
int zero = 0;
int var_18 = -2016976658;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-1;
int var_21 = -872943116;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)24850;
unsigned short arr_0 [12] ;
int arr_1 [12] ;
short arr_3 [12] ;
unsigned long long int arr_4 [12] [12] [12] ;
long long int arr_5 [12] [12] ;
short arr_6 [12] [12] [12] [12] ;
unsigned short arr_7 [12] ;
unsigned int arr_8 [12] [12] [12] ;
short arr_9 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)41925;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 338317291;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-7535;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 17171161056624113610ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 1360923808739644605LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)16197;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)51188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 49662654U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-8952 : (short)9009;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
