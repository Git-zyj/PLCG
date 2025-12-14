#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36013;
unsigned long long int var_7 = 1228732859003908516ULL;
unsigned int var_8 = 3475792353U;
int var_9 = -1856152517;
int zero = 0;
unsigned int var_10 = 43097208U;
unsigned int var_11 = 1911933929U;
unsigned char var_12 = (unsigned char)91;
unsigned int var_13 = 3946294984U;
unsigned char var_14 = (unsigned char)239;
short var_15 = (short)-22128;
unsigned char arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned char arr_2 [17] ;
long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -7362702834531190684LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
