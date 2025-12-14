#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
signed char var_2 = (signed char)-24;
unsigned char var_4 = (unsigned char)206;
_Bool var_7 = (_Bool)0;
long long int var_11 = -5779253003927754739LL;
int zero = 0;
unsigned short var_12 = (unsigned short)57484;
unsigned long long int var_13 = 7629338565570528210ULL;
unsigned short var_14 = (unsigned short)29143;
unsigned short var_15 = (unsigned short)65054;
long long int var_16 = -3700971923191783379LL;
short arr_0 [13] ;
unsigned short arr_1 [13] ;
long long int arr_2 [13] ;
unsigned char arr_3 [13] ;
short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-11672;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)13369;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1838472891882439504LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-24453;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
