#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 791605824U;
unsigned long long int var_5 = 2913413567803517374ULL;
short var_7 = (short)15625;
int var_9 = -1613618632;
unsigned int var_11 = 2998109072U;
signed char var_12 = (signed char)-71;
int zero = 0;
unsigned short var_13 = (unsigned short)5564;
signed char var_14 = (signed char)-35;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 9734680147337713660ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
