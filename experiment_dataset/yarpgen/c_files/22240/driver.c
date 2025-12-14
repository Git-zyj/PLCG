#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3349155050985477267LL;
long long int var_7 = 1708842120739672740LL;
unsigned long long int var_12 = 18140185616773685398ULL;
unsigned short var_14 = (unsigned short)18651;
unsigned char var_16 = (unsigned char)25;
int zero = 0;
unsigned char var_17 = (unsigned char)68;
unsigned short var_18 = (unsigned short)3363;
signed char var_19 = (signed char)25;
signed char var_20 = (signed char)-65;
short var_21 = (short)21684;
int var_22 = -242997538;
unsigned int arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned long long int arr_2 [19] ;
unsigned int arr_3 [19] ;
unsigned long long int arr_6 [10] ;
signed char arr_10 [10] ;
_Bool arr_4 [19] ;
long long int arr_7 [10] ;
int arr_8 [10] ;
_Bool arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1960793894U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 15330220420379302661ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1202601090U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 5689586931980248685ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)85;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 5013424782051671102LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 1506453394;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
