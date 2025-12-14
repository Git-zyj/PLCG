#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 52684304;
int var_2 = -1453236986;
int var_3 = 372523055;
unsigned long long int var_4 = 14009218771690911918ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 5349186424043997352ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 12199980033983736357ULL;
int zero = 0;
short var_10 = (short)25347;
signed char var_11 = (signed char)37;
unsigned long long int var_12 = 6984337764083708372ULL;
unsigned long long int var_13 = 3973815170086532762ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)24;
unsigned long long int var_16 = 8613015552922466935ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)25185;
long long int var_19 = -4520881585091079390LL;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
long long int arr_4 [22] ;
unsigned char arr_5 [22] [22] ;
unsigned char arr_7 [22] [22] [22] [22] ;
_Bool arr_9 [22] [22] ;
unsigned short arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 7818111259930468716ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 14470038031064400448ULL : 2939664432649795862ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -2167535904941734676LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)96 : (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47663 : (unsigned short)63128;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
