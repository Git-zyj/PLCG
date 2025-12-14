#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)186;
unsigned long long int var_5 = 5981601654881675140ULL;
unsigned short var_6 = (unsigned short)46732;
unsigned int var_7 = 3560355898U;
signed char var_8 = (signed char)-35;
unsigned long long int var_9 = 15236986714765010765ULL;
unsigned char var_10 = (unsigned char)43;
signed char var_11 = (signed char)-118;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)7862;
short var_15 = (short)27897;
int zero = 0;
unsigned int var_16 = 4113400467U;
signed char var_17 = (signed char)-127;
unsigned short var_18 = (unsigned short)32875;
unsigned int var_19 = 1005144135U;
unsigned short var_20 = (unsigned short)10066;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
long long int arr_3 [18] ;
long long int arr_4 [18] [18] [18] ;
int arr_6 [18] ;
unsigned char arr_7 [18] ;
signed char arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 11937516627297457382ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5105193988850747464ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1981055293277193731LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3054258100243752172LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1345321872 : -448636257;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (signed char)-116;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
