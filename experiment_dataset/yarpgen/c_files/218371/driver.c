#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5126800905038939535LL;
long long int var_1 = 7866661945146447872LL;
unsigned char var_4 = (unsigned char)95;
unsigned int var_5 = 98559414U;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)18467;
unsigned short var_9 = (unsigned short)12248;
int var_10 = 1778655324;
unsigned int var_11 = 3930305649U;
unsigned long long int var_12 = 6477015248198144758ULL;
int zero = 0;
unsigned int var_13 = 1904390439U;
unsigned int var_14 = 3630948848U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 879341147U;
unsigned long long int arr_0 [19] ;
unsigned int arr_3 [19] ;
unsigned short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3001345818357851122ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1626447065U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)62110;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
