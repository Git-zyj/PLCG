#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -958095368518584191LL;
long long int var_1 = 2481913109261145335LL;
long long int var_2 = 3768692553706158112LL;
int var_3 = -310365211;
int var_4 = 1711595972;
int var_5 = -208966597;
long long int var_6 = 33849952181037176LL;
int var_7 = 440240652;
int var_10 = 499533376;
long long int var_11 = -577425953102587203LL;
int var_12 = 1099978518;
int var_13 = -1580629325;
long long int var_14 = -4984150283686112414LL;
long long int var_15 = 734723537092248572LL;
int zero = 0;
long long int var_16 = 3293239359479319118LL;
long long int var_17 = 502140259771313977LL;
int var_18 = -231379240;
long long int var_19 = -6843506556562889413LL;
int var_20 = -2067840983;
long long int var_21 = 6632054501342176168LL;
long long int var_22 = 8808075972660074548LL;
int var_23 = 1279343962;
long long int var_24 = -1686138653011028730LL;
int var_25 = 1842898655;
int var_26 = -1789195398;
int arr_1 [14] [14] ;
long long int arr_4 [14] [14] ;
int arr_5 [14] ;
int arr_6 [18] ;
long long int arr_7 [18] ;
long long int arr_12 [23] ;
int arr_2 [14] ;
int arr_3 [14] ;
long long int arr_9 [18] ;
long long int arr_14 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 10002038 : 149499794;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -8498554183023545237LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -1031111858;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 215956838;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -2286312742352736043LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = -6923930371497969181LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1403423397 : 851363725;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -1439644193 : 13662189;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 815273285254061532LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = 538367554037541597LL;
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
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
