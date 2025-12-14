#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16702542933351256325ULL;
unsigned long long int var_1 = 850256912020134472ULL;
unsigned long long int var_3 = 3972914398108990069ULL;
long long int var_4 = -7288121427404414333LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)19;
unsigned char var_10 = (unsigned char)131;
unsigned long long int var_11 = 14432749633795652822ULL;
unsigned char var_12 = (unsigned char)3;
int var_14 = 409178028;
int zero = 0;
unsigned char var_15 = (unsigned char)197;
unsigned int var_16 = 1714990228U;
_Bool var_17 = (_Bool)0;
long long int var_18 = 5695195639290144275LL;
long long int var_19 = -1935965184874112829LL;
unsigned long long int var_20 = 8977222039756562990ULL;
_Bool arr_3 [20] [20] ;
unsigned long long int arr_4 [20] [20] ;
unsigned long long int arr_5 [20] ;
unsigned char arr_7 [20] [20] [20] [20] ;
unsigned long long int arr_8 [20] ;
unsigned short arr_9 [20] [20] [20] ;
unsigned long long int arr_10 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 14318692553234706663ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 4439069799892576533ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 17486083077256533488ULL : 16952972939737540872ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)5142 : (unsigned short)4675;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 18283503447487416403ULL : 4504947248531875817ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
