#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9504405379211618260ULL;
unsigned short var_2 = (unsigned short)986;
unsigned long long int var_3 = 14412071423351484977ULL;
unsigned int var_4 = 70967760U;
unsigned int var_6 = 1401194019U;
unsigned short var_11 = (unsigned short)29942;
signed char var_12 = (signed char)-13;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)41015;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_19 = 908188165;
unsigned char var_20 = (unsigned char)12;
unsigned short var_21 = (unsigned short)43993;
_Bool var_22 = (_Bool)1;
short var_23 = (short)5194;
_Bool var_24 = (_Bool)0;
long long int var_25 = -7433360248409175317LL;
unsigned char var_26 = (unsigned char)220;
unsigned short var_27 = (unsigned short)21327;
unsigned long long int var_28 = 265510440396973968ULL;
unsigned long long int var_29 = 7622749603528631080ULL;
unsigned long long int arr_0 [10] [10] ;
_Bool arr_3 [10] [10] ;
unsigned long long int arr_4 [10] [10] ;
unsigned long long int arr_5 [10] [10] [10] ;
long long int arr_14 [10] [10] ;
long long int arr_15 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 2449079490530411076ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 16662642277119273070ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 16106125098678013338ULL : 4940741565758504733ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = -5807377914144254019LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -7062114116422599941LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
