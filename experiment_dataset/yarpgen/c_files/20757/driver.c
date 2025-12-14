#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12553;
short var_2 = (short)449;
unsigned long long int var_3 = 1453001331582382031ULL;
unsigned int var_5 = 2665435493U;
short var_6 = (short)-24092;
int zero = 0;
long long int var_17 = -7246140483958946699LL;
unsigned long long int var_18 = 15236401992280022104ULL;
short var_19 = (short)12992;
unsigned long long int var_20 = 4595685276266932642ULL;
unsigned int arr_0 [10] ;
unsigned char arr_1 [10] ;
_Bool arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4276482255U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
