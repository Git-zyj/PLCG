#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)233;
signed char var_2 = (signed char)100;
int var_6 = 539406385;
unsigned char var_7 = (unsigned char)1;
unsigned long long int var_8 = 1126748422605275286ULL;
signed char var_9 = (signed char)72;
int zero = 0;
unsigned char var_11 = (unsigned char)121;
signed char var_12 = (signed char)105;
long long int var_13 = 3314588419345677775LL;
unsigned char var_14 = (unsigned char)248;
unsigned char var_15 = (unsigned char)137;
long long int var_16 = -4902650247041725618LL;
unsigned char var_17 = (unsigned char)70;
unsigned char var_18 = (unsigned char)141;
short var_19 = (short)23243;
unsigned int var_20 = 1668134655U;
signed char var_21 = (signed char)-33;
signed char var_22 = (signed char)-111;
short var_23 = (short)17223;
unsigned int var_24 = 1437702011U;
unsigned int arr_1 [14] ;
long long int arr_2 [14] [14] [14] ;
unsigned long long int arr_3 [14] ;
long long int arr_6 [14] [14] [14] [14] ;
unsigned int arr_7 [14] ;
signed char arr_9 [14] ;
long long int arr_12 [14] [14] [14] ;
long long int arr_15 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 4116924791U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 9178978997781458500LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 763397237993965362ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -1224457675435391662LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 4062803265U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -7176737747925953752LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 7332487280885541231LL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
