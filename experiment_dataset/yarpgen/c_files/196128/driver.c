#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1914108625U;
long long int var_2 = -1348722645319477184LL;
unsigned char var_3 = (unsigned char)223;
int var_4 = 1479839620;
unsigned char var_5 = (unsigned char)132;
short var_6 = (short)-10253;
short var_7 = (short)15733;
unsigned char var_8 = (unsigned char)195;
long long int var_9 = 3290004098039043958LL;
signed char var_10 = (signed char)82;
int var_15 = 577223097;
unsigned long long int var_17 = 10613931250410125780ULL;
int zero = 0;
unsigned long long int var_18 = 5203399361757366729ULL;
int var_19 = -239821868;
int var_20 = 1656091725;
unsigned int var_21 = 4226070962U;
unsigned long long int var_22 = 9861060042979048843ULL;
unsigned short var_23 = (unsigned short)17993;
unsigned long long int var_24 = 17774934268822661271ULL;
unsigned short var_25 = (unsigned short)2844;
unsigned int var_26 = 2667859892U;
unsigned long long int arr_0 [19] ;
signed char arr_1 [19] [19] ;
int arr_3 [19] [19] ;
long long int arr_7 [19] ;
unsigned char arr_8 [19] ;
unsigned short arr_11 [24] ;
unsigned short arr_2 [19] ;
unsigned short arr_5 [19] ;
unsigned char arr_6 [19] [19] [19] ;
int arr_9 [19] [19] ;
long long int arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 17927499311199820689ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 1800060819;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1418699951122108295LL : 6202496010348320220LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (unsigned short)1560;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)20645;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49351 : (unsigned short)29813;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -197716982 : -956374002;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 2449355411675737961LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
