#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 28453302U;
unsigned int var_1 = 3116321139U;
unsigned char var_2 = (unsigned char)209;
unsigned long long int var_5 = 17581449533811424868ULL;
unsigned char var_6 = (unsigned char)157;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15373670595481636996ULL;
unsigned int var_10 = 1595501385U;
unsigned short var_11 = (unsigned short)59813;
unsigned long long int var_13 = 3488087472168465655ULL;
unsigned char var_14 = (unsigned char)3;
int var_16 = 36000907;
int var_19 = -1308356131;
int zero = 0;
unsigned int var_20 = 2397545871U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 11831164566449557324ULL;
signed char var_23 = (signed char)120;
unsigned int var_24 = 4230787816U;
signed char var_25 = (signed char)-91;
_Bool arr_0 [21] ;
short arr_1 [21] ;
short arr_3 [15] ;
int arr_6 [15] ;
int arr_5 [15] ;
unsigned int arr_8 [15] ;
unsigned long long int arr_9 [15] ;
unsigned long long int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)9564 : (short)487;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-10819;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -835465310;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1038980161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 4124329403U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 5327855199600470551ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = 3910824466983302391ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
