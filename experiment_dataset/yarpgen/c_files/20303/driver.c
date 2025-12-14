#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1218232593;
int var_2 = -412662388;
int var_3 = -663128467;
int var_4 = -10670295;
unsigned int var_5 = 3716561491U;
int var_6 = 1174993989;
signed char var_8 = (signed char)98;
long long int var_9 = -2279440283584970434LL;
int zero = 0;
signed char var_11 = (signed char)-98;
signed char var_12 = (signed char)63;
unsigned int var_13 = 2933412840U;
signed char var_14 = (signed char)96;
long long int var_15 = 9098862265302932588LL;
signed char var_16 = (signed char)68;
unsigned char var_17 = (unsigned char)24;
unsigned int var_18 = 1444823906U;
signed char var_19 = (signed char)19;
signed char var_20 = (signed char)54;
int var_21 = 118369335;
unsigned int var_22 = 1647127070U;
long long int var_23 = -5620455699917330639LL;
unsigned char var_24 = (unsigned char)21;
long long int var_25 = 6936263315686768359LL;
long long int var_26 = 6748629792269450782LL;
int arr_0 [20] ;
signed char arr_1 [20] [20] ;
signed char arr_2 [20] [20] ;
signed char arr_3 [20] [20] ;
unsigned char arr_4 [20] [20] ;
unsigned int arr_5 [20] [20] [20] ;
unsigned int arr_6 [20] ;
int arr_11 [20] ;
int arr_12 [20] [20] ;
unsigned int arr_16 [20] ;
int arr_18 [20] [20] [20] [20] ;
int arr_7 [20] [20] ;
long long int arr_8 [20] ;
unsigned char arr_23 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -1425291114;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1881979530U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1932666083U : 3586986863U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = -1217018790;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 364799952;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 626178885U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1708671756;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1723700648 : -860550387;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -2409501841134394302LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)72 : (unsigned char)102;
}

void checksum() {
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
