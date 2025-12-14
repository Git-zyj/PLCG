#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4889943839574558621ULL;
unsigned int var_6 = 1909336642U;
short var_7 = (short)-1031;
unsigned long long int var_8 = 7714834857276720111ULL;
unsigned long long int var_9 = 5128434470465691810ULL;
int zero = 0;
short var_12 = (short)-4892;
unsigned short var_13 = (unsigned short)1391;
int var_14 = -1041315034;
int var_15 = 257247260;
short var_16 = (short)20705;
unsigned long long int var_17 = 12671976287125289282ULL;
unsigned char var_18 = (unsigned char)196;
long long int arr_0 [18] ;
short arr_1 [18] [18] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -455445104680425099LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)5379 : (short)16888;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3251231132U : 745460115U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
