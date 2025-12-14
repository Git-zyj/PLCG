#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -325393588;
unsigned short var_1 = (unsigned short)30576;
short var_2 = (short)24590;
unsigned long long int var_3 = 11124753676533041634ULL;
signed char var_4 = (signed char)-27;
unsigned int var_8 = 2674599387U;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 333248221U;
int zero = 0;
unsigned short var_13 = (unsigned short)33477;
unsigned short var_14 = (unsigned short)64192;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 616882597U;
unsigned int var_18 = 2922824047U;
_Bool var_19 = (_Bool)0;
_Bool arr_0 [14] [14] ;
int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -542267900;
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
