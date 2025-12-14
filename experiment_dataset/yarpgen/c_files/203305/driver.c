#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17361012080654226696ULL;
unsigned long long int var_1 = 12352334606643030738ULL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 751511753U;
unsigned char var_4 = (unsigned char)159;
unsigned int var_5 = 1301599922U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)54951;
int var_8 = 406910582;
unsigned short var_9 = (unsigned short)9300;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)174;
unsigned int var_12 = 3155549776U;
unsigned short var_13 = (unsigned short)39213;
unsigned long long int var_14 = 15146868234316334297ULL;
unsigned long long int var_15 = 5001962774717990606ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)34870;
unsigned long long int var_18 = 4301027802456741473ULL;
unsigned int var_19 = 2115232679U;
long long int var_20 = 3730927627131433495LL;
short var_21 = (short)3278;
unsigned long long int var_22 = 7508846642675821639ULL;
signed char var_23 = (signed char)-79;
signed char var_24 = (signed char)124;
signed char var_25 = (signed char)-56;
int arr_0 [18] ;
signed char arr_1 [18] [18] ;
long long int arr_2 [18] [18] [18] ;
int arr_3 [18] [18] [18] ;
unsigned long long int arr_4 [12] [12] ;
int arr_5 [12] ;
_Bool arr_6 [11] [11] ;
signed char arr_8 [11] [11] ;
_Bool arr_9 [24] [24] ;
short arr_11 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -667848924;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4020485776630849624LL : -7011938990420425247LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 804377153;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 5094263897347576712ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 375410170;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)13088;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
