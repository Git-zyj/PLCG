#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-93;
long long int var_4 = -4638134931633351409LL;
unsigned long long int var_6 = 9951505203756970913ULL;
short var_7 = (short)1774;
unsigned int var_9 = 311395337U;
_Bool var_11 = (_Bool)0;
int var_13 = 1050217017;
signed char var_15 = (signed char)5;
signed char var_16 = (signed char)54;
int zero = 0;
long long int var_17 = 8442086215859106748LL;
unsigned char var_18 = (unsigned char)16;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)187;
unsigned int var_21 = 1851668991U;
signed char var_22 = (signed char)85;
long long int var_23 = 1155731427256643457LL;
short var_24 = (short)-11812;
unsigned short var_25 = (unsigned short)57306;
unsigned int var_26 = 1516402185U;
long long int var_27 = -7582749908008051618LL;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)81;
signed char var_30 = (signed char)-18;
unsigned int arr_1 [13] [13] ;
signed char arr_2 [13] ;
unsigned char arr_3 [13] [13] ;
_Bool arr_4 [13] [13] [13] [13] ;
unsigned char arr_5 [13] [13] [13] ;
unsigned char arr_7 [16] ;
_Bool arr_8 [16] ;
unsigned char arr_9 [16] ;
short arr_10 [16] [16] ;
unsigned int arr_12 [16] [16] [16] ;
_Bool arr_13 [16] [16] [16] ;
long long int arr_14 [16] [16] [16] ;
unsigned int arr_17 [21] ;
signed char arr_6 [13] ;
unsigned long long int arr_18 [21] ;
unsigned char arr_22 [13] ;
unsigned long long int arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 3132031276U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-18569;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 809251906U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -3706495216368474695LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 2276794990U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = 10255550232190031308ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = 13177300056892132616ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
