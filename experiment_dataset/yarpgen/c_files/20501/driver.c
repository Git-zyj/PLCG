#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2053155054U;
unsigned char var_8 = (unsigned char)228;
long long int var_9 = -3107714181923096363LL;
signed char var_11 = (signed char)-10;
short var_13 = (short)28041;
unsigned int var_14 = 1911900863U;
int zero = 0;
unsigned int var_15 = 2873507081U;
short var_16 = (short)21514;
short var_17 = (short)-22753;
signed char arr_0 [25] ;
signed char arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-64;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
