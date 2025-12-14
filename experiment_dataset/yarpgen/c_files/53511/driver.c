#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7981252485830284633ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 84564883U;
short var_5 = (short)-27960;
unsigned short var_7 = (unsigned short)12698;
long long int var_9 = 1708086499355135892LL;
int var_11 = 710552222;
_Bool var_12 = (_Bool)0;
unsigned char var_14 = (unsigned char)99;
unsigned long long int var_16 = 17771355122420607561ULL;
int zero = 0;
unsigned int var_18 = 2854930998U;
unsigned int var_19 = 3323100595U;
unsigned short var_20 = (unsigned short)37941;
unsigned short arr_0 [21] ;
_Bool arr_2 [21] ;
long long int arr_3 [21] [21] ;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)34285;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3809376320288967025LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -2280501637707565766LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
