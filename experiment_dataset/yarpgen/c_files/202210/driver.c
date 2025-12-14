#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32374;
long long int var_1 = -2105898073562475353LL;
short var_2 = (short)-22430;
unsigned int var_3 = 489844883U;
unsigned short var_4 = (unsigned short)43494;
unsigned long long int var_5 = 15081051129796451949ULL;
unsigned char var_7 = (unsigned char)98;
unsigned int var_8 = 997510858U;
unsigned long long int var_9 = 6539282868449497456ULL;
unsigned short var_10 = (unsigned short)33896;
_Bool var_11 = (_Bool)0;
short var_13 = (short)24295;
unsigned long long int var_15 = 16406306720180128124ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)132;
unsigned char var_17 = (unsigned char)135;
unsigned long long int var_18 = 17536433259326138089ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 822366465;
unsigned long long int arr_0 [22] ;
long long int arr_2 [22] ;
long long int arr_4 [22] [22] ;
_Bool arr_5 [22] ;
_Bool arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
_Bool arr_8 [22] [22] ;
long long int arr_9 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 10994514220907271141ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -8279396265810052682LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 9067070737084149755LL : 7449845622121399451LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7589240115085532165LL : -8293968425144871609LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
