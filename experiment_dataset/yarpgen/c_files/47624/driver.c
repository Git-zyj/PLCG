#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3469507756064082340ULL;
unsigned short var_4 = (unsigned short)45823;
int var_5 = -1136308966;
unsigned long long int var_10 = 3174774528940091464ULL;
int zero = 0;
unsigned long long int var_13 = 9385877395582387991ULL;
unsigned long long int var_14 = 18351522053383765378ULL;
unsigned long long int var_15 = 18087407097841501749ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8660153314117537554LL;
unsigned short var_18 = (unsigned short)26772;
_Bool var_19 = (_Bool)1;
unsigned short arr_1 [15] ;
unsigned long long int arr_2 [15] ;
_Bool arr_4 [15] [15] [15] ;
signed char arr_6 [15] ;
unsigned char arr_7 [15] ;
unsigned int arr_8 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)47526;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 8456041623157058576ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)101 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3865855318U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
