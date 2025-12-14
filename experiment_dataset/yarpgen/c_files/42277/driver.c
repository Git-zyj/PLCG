#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3737927708U;
int var_3 = 1807403282;
long long int var_4 = 2410673283530073198LL;
unsigned int var_5 = 2446444290U;
unsigned int var_6 = 152017188U;
unsigned int var_8 = 2274099341U;
long long int var_9 = -3900876174988645044LL;
short var_11 = (short)-27786;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)110;
unsigned short var_15 = (unsigned short)33456;
unsigned int var_16 = 708778097U;
unsigned int var_17 = 1466241107U;
long long int var_18 = -6925946708716395123LL;
_Bool var_19 = (_Bool)1;
unsigned int arr_0 [13] ;
unsigned int arr_1 [13] [13] ;
unsigned int arr_2 [13] ;
unsigned int arr_7 [13] [13] ;
unsigned int arr_3 [13] [13] ;
_Bool arr_8 [13] ;
short arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 526922971U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 2722291227U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3480126752U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 4246028312U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 253778158U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)23126 : (short)-5714;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
