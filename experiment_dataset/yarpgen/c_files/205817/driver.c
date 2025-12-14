#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)46;
unsigned int var_3 = 976553304U;
unsigned long long int var_4 = 9472266715087468921ULL;
long long int var_5 = -1624348411868957171LL;
long long int var_8 = -2834255178853920178LL;
int var_9 = -308778605;
short var_10 = (short)-29210;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-30218;
int var_14 = -1881659613;
int var_16 = -1504593920;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 8915873863760111936ULL;
signed char var_21 = (signed char)103;
short var_22 = (short)29870;
unsigned short var_23 = (unsigned short)59153;
unsigned int var_24 = 805544598U;
unsigned char var_25 = (unsigned char)4;
unsigned int var_26 = 1372812117U;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 826771630032719340ULL;
unsigned int var_29 = 3157929925U;
unsigned short var_30 = (unsigned short)18685;
long long int var_31 = -3425594039092825954LL;
long long int arr_0 [10] [10] ;
unsigned int arr_1 [10] ;
unsigned int arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
unsigned int arr_5 [10] [10] ;
unsigned long long int arr_6 [10] [10] ;
unsigned int arr_9 [10] ;
unsigned short arr_11 [10] [10] ;
unsigned int arr_12 [10] ;
int arr_16 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_4 [14] ;
unsigned char arr_7 [10] ;
unsigned int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1828321111845210860LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2514814561U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1348732775U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)58636;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 3024587825U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 4217376582244136931ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 3253715704U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)19592;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = 1475510348U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 304691047;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1159092456133394278ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 4198680654U : 2725092816U;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
