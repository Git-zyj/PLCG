#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -291145905;
signed char var_1 = (signed char)81;
unsigned long long int var_2 = 567428963236097342ULL;
signed char var_3 = (signed char)-44;
_Bool var_4 = (_Bool)0;
int var_5 = 330625314;
_Bool var_6 = (_Bool)0;
long long int var_7 = -4157986739432726000LL;
int var_8 = 1112624436;
long long int var_9 = -9205309536494455536LL;
unsigned int var_10 = 2047123587U;
int zero = 0;
signed char var_12 = (signed char)105;
signed char var_13 = (signed char)-46;
int var_14 = -1881493108;
short var_15 = (short)21334;
unsigned short var_16 = (unsigned short)27995;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5287231862086638329LL;
unsigned long long int var_19 = 13163249915599639000ULL;
signed char var_20 = (signed char)-119;
long long int var_21 = -1824408429190813594LL;
unsigned int var_22 = 2920971733U;
unsigned long long int var_23 = 13951283915578642116ULL;
long long int var_24 = 1928379945966301115LL;
unsigned int var_25 = 700808340U;
unsigned short var_26 = (unsigned short)46022;
long long int var_27 = 6979013081789864234LL;
long long int arr_0 [11] ;
long long int arr_4 [11] ;
_Bool arr_6 [11] [11] ;
signed char arr_15 [18] [18] ;
long long int arr_16 [18] [18] [18] [18] ;
long long int arr_19 [18] [18] [18] [18] ;
long long int arr_22 [25] ;
signed char arr_11 [18] ;
long long int arr_20 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 782634095910205498LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1559818973122707420LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)90 : (signed char)-126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -391798620018206327LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 2847522715437574433LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = -7743754126981504894LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -6475267031091459688LL : -3968937775186081418LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
