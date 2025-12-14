#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)140;
signed char var_3 = (signed char)98;
unsigned int var_4 = 4015091383U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 4079474424U;
int var_9 = 1765730468;
short var_11 = (short)-11262;
int zero = 0;
unsigned short var_13 = (unsigned short)13724;
short var_14 = (short)-31798;
unsigned long long int var_15 = 15765131105785184352ULL;
unsigned short arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
unsigned short arr_2 [20] ;
unsigned int arr_3 [20] [20] ;
short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)44504 : (unsigned short)34194;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1368888651U : 2958507407U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)63991;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3265801827U : 2014155261U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)31307 : (short)-24375;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
