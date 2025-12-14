#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6141073373873979733ULL;
signed char var_1 = (signed char)-111;
unsigned long long int var_4 = 9613418372009712757ULL;
long long int var_5 = -1278447096149006196LL;
signed char var_9 = (signed char)-19;
unsigned int var_10 = 213695641U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 756660930U;
unsigned char var_14 = (unsigned char)149;
int zero = 0;
unsigned char var_15 = (unsigned char)62;
unsigned char var_16 = (unsigned char)124;
unsigned char var_17 = (unsigned char)38;
int var_18 = 1052219545;
unsigned int var_19 = 360511488U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)8430;
unsigned long long int var_22 = 11621612521072110466ULL;
int var_23 = 1923647019;
unsigned int var_24 = 3839267930U;
unsigned short var_25 = (unsigned short)4104;
unsigned int var_26 = 10294143U;
long long int var_27 = -778665837810031176LL;
unsigned long long int var_28 = 2661257003603989340ULL;
signed char var_29 = (signed char)-127;
long long int var_30 = -739672673116142837LL;
signed char var_31 = (signed char)32;
unsigned int arr_1 [19] [19] ;
unsigned char arr_4 [19] [19] ;
unsigned int arr_9 [19] [19] ;
_Bool arr_13 [19] ;
unsigned short arr_16 [19] [19] [19] ;
unsigned int arr_18 [19] [19] [19] [19] ;
int arr_20 [19] [19] [19] [19] ;
unsigned char arr_22 [19] ;
unsigned short arr_26 [21] ;
unsigned short arr_3 [19] ;
signed char arr_8 [19] [19] [19] ;
long long int arr_12 [19] ;
unsigned long long int arr_23 [19] ;
_Bool arr_24 [19] [19] ;
unsigned long long int arr_27 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 153512163U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 2626567788U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)15173;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 440912411U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -986635941;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60456 : (unsigned short)52693;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)6095;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -2449222021712696360LL : -4833264489840035031LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = 5106026950829171769ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 17365491465958009284ULL : 12945775660241080142ULL;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
