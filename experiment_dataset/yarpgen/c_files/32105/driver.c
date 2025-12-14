#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1522396385;
unsigned char var_4 = (unsigned char)59;
unsigned char var_8 = (unsigned char)90;
unsigned char var_9 = (unsigned char)184;
long long int var_11 = -502694588584859545LL;
int var_12 = -2107039411;
unsigned char var_13 = (unsigned char)149;
long long int var_15 = 1310041036775049736LL;
unsigned char var_16 = (unsigned char)23;
int zero = 0;
unsigned char var_18 = (unsigned char)160;
int var_19 = -129265168;
long long int var_20 = 8059579798620214067LL;
int var_21 = -1341485824;
int var_22 = -204188013;
long long int arr_1 [17] ;
int arr_2 [17] ;
int arr_4 [17] ;
long long int arr_5 [17] ;
int arr_12 [21] ;
long long int arr_6 [17] [17] ;
int arr_7 [17] [17] [17] ;
int arr_10 [12] [12] ;
int arr_13 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3914509605232515784LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -1801440878;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1365667891 : -915427258;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -668977593904169760LL : 3290550877273344251LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 1003829099;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2210835358170132169LL : -5503872969279838944LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1839259466 : -633181684;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = -1794532500;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = -2114834085;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
