#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)61;
unsigned int var_1 = 1272753764U;
unsigned int var_2 = 3314334829U;
long long int var_3 = 1793052603735659039LL;
unsigned long long int var_8 = 5841908182721772564ULL;
signed char var_9 = (signed char)-51;
int zero = 0;
unsigned short var_15 = (unsigned short)12156;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1142236531826161649LL;
unsigned int var_18 = 2489951535U;
_Bool arr_3 [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
