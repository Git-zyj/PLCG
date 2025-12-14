#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4211163332U;
unsigned short var_4 = (unsigned short)17825;
signed char var_5 = (signed char)-61;
int var_6 = -934965968;
int var_7 = 977348658;
long long int var_8 = -3036855524722471732LL;
short var_9 = (short)18960;
unsigned long long int var_11 = 2237792324435838747ULL;
int var_13 = -1438785463;
signed char var_14 = (signed char)-80;
int zero = 0;
unsigned int var_17 = 90718239U;
short var_18 = (short)-13022;
unsigned int var_19 = 2572927054U;
unsigned char var_20 = (unsigned char)45;
signed char arr_0 [12] [12] ;
int arr_1 [12] ;
signed char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-103 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 528863149 : -1623034031;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-85 : (signed char)108;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
