#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)76;
_Bool var_7 = (_Bool)0;
long long int var_10 = -7972351270258498254LL;
_Bool var_11 = (_Bool)1;
int var_14 = -1061163616;
unsigned char var_17 = (unsigned char)137;
long long int var_19 = 8247975735249792894LL;
int zero = 0;
unsigned long long int var_20 = 9985230347792674058ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 16258041525118643361ULL;
long long int var_23 = -9059151916190001204LL;
signed char var_24 = (signed char)-120;
unsigned long long int var_25 = 12662153593608604252ULL;
signed char var_26 = (signed char)-56;
unsigned short var_27 = (unsigned short)42631;
unsigned short var_28 = (unsigned short)27822;
long long int var_29 = -4443274729302317625LL;
int var_30 = -1906222717;
unsigned long long int var_31 = 6951149918227904307ULL;
unsigned int arr_0 [25] [25] ;
unsigned int arr_1 [25] [25] ;
int arr_2 [22] ;
int arr_3 [22] ;
_Bool arr_6 [14] ;
signed char arr_7 [23] ;
unsigned long long int arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 2701178772U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 3367374584U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -2054862046;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -158364706;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 6802339588927005480ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
