#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned short var_2 = (unsigned short)40802;
unsigned int var_3 = 4271350079U;
unsigned char var_4 = (unsigned char)101;
unsigned long long int var_8 = 3891658314799144738ULL;
long long int var_9 = 1499253894652509021LL;
_Bool var_11 = (_Bool)1;
long long int var_13 = -4350687241159822337LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1594830256U;
long long int var_17 = 8023226807576730993LL;
signed char var_18 = (signed char)-120;
unsigned short var_19 = (unsigned short)30922;
unsigned short var_20 = (unsigned short)45527;
unsigned short var_21 = (unsigned short)46542;
unsigned short var_22 = (unsigned short)13237;
unsigned short var_23 = (unsigned short)41119;
unsigned short var_24 = (unsigned short)6457;
unsigned short var_25 = (unsigned short)16565;
_Bool var_26 = (_Bool)0;
unsigned int arr_0 [14] [14] ;
unsigned short arr_1 [14] [14] ;
int arr_3 [14] ;
long long int arr_7 [14] [14] [14] [14] ;
int arr_9 [14] [14] [14] ;
unsigned char arr_13 [14] [14] [14] ;
unsigned long long int arr_15 [14] [14] [14] [14] ;
signed char arr_16 [14] ;
unsigned int arr_8 [14] [14] [14] ;
int arr_22 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1794493047U : 2425191612U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)53837;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 1197305852;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 720273368527192718LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 590489632;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)62 : (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 7511198646610495705ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3208846367U : 3349498395U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -457362241 : 1636489301;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
