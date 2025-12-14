#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)79;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1011851818472651428LL;
_Bool var_9 = (_Bool)1;
int var_11 = 1050108899;
signed char var_14 = (signed char)-9;
unsigned short var_17 = (unsigned short)60649;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -1917520013;
_Bool var_20 = (_Bool)0;
long long int arr_5 [20] [20] [20] [20] ;
unsigned long long int arr_6 [20] ;
signed char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -4270853102171993598LL : 1351630672971188598LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1083406032703930523ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)-106;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
