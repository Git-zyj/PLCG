#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)27370;
unsigned int var_11 = 470730259U;
int var_12 = -193680811;
int var_14 = -105638731;
long long int var_19 = -83687335075670648LL;
int zero = 0;
signed char var_20 = (signed char)102;
int var_21 = -1939096309;
long long int var_22 = -9097136676804040690LL;
unsigned short var_23 = (unsigned short)23717;
signed char arr_1 [10] ;
int arr_2 [10] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1808750991 : -1065113421;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 9078661794989634344ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
