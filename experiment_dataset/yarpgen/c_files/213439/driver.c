#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
long long int var_2 = 2020662194457634151LL;
unsigned long long int var_3 = 5241952232900061375ULL;
unsigned long long int var_5 = 12979366762954840329ULL;
unsigned long long int var_6 = 15818872845702263951ULL;
long long int var_7 = 7972764810136201955LL;
unsigned long long int var_8 = 3738127516151347121ULL;
unsigned short var_10 = (unsigned short)47062;
int zero = 0;
int var_13 = 1524383233;
unsigned int var_14 = 1549411494U;
unsigned int var_15 = 4257738833U;
signed char var_16 = (signed char)-96;
_Bool var_17 = (_Bool)1;
long long int var_18 = -2837499271282000582LL;
short arr_0 [10] [10] ;
unsigned int arr_1 [10] [10] ;
unsigned int arr_2 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-11219;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1110952573U : 3870722932U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1302800776U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
