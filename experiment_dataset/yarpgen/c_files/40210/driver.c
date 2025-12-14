#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9146689872769909281LL;
unsigned long long int var_2 = 13599454555548000321ULL;
unsigned long long int var_3 = 11391346452403479968ULL;
unsigned char var_4 = (unsigned char)54;
int var_5 = -57390932;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)58233;
unsigned long long int var_13 = 4599890460846132835ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 1840450556U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15308907745642346892ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-55;
long long int var_22 = -6234683539501810860LL;
_Bool var_23 = (_Bool)0;
unsigned int arr_5 [22] ;
unsigned char arr_6 [22] [22] ;
unsigned char arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 313880942U : 2418430007U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)15 : (unsigned char)36;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
