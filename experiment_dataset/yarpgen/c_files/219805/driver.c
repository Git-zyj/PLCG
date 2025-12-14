#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
long long int var_3 = -3281888491910976657LL;
long long int var_11 = 1318402218938426617LL;
unsigned short var_12 = (unsigned short)39342;
long long int var_13 = -4551010779429064413LL;
long long int var_16 = -3281798167373634709LL;
int zero = 0;
long long int var_19 = 6948755804235110287LL;
unsigned long long int var_20 = 1696200950933947876ULL;
long long int var_21 = -5736538041790628068LL;
int var_22 = -429354339;
signed char var_23 = (signed char)-11;
_Bool var_24 = (_Bool)0;
short arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
long long int arr_4 [16] ;
long long int arr_6 [16] ;
short arr_8 [16] ;
unsigned char arr_9 [16] [16] [16] ;
short arr_10 [16] [16] [16] ;
long long int arr_11 [16] [16] [16] [16] ;
_Bool arr_12 [16] [16] ;
unsigned int arr_13 [16] [16] [16] ;
unsigned int arr_17 [16] [16] ;
unsigned short arr_22 [16] [16] ;
long long int arr_2 [20] [20] ;
short arr_3 [20] ;
long long int arr_7 [16] ;
unsigned short arr_14 [16] ;
long long int arr_15 [16] [16] ;
_Bool arr_16 [16] ;
unsigned char arr_20 [16] ;
long long int arr_23 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)22660 : (short)-4401;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3444231031U : 215186190U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1723306886479328615LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -9205904972630336451LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)5405;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)26112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -6344043415893977740LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2639967957U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = 357357222U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)14557;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -8811018486810112329LL : 1338586145635957602LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-13732 : (short)-27455;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 4519469755414949430LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned short)34126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = -653869110971583040LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = 6873493747708793598LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
