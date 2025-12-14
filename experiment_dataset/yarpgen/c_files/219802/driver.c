#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64696;
short var_5 = (short)109;
short var_6 = (short)-26277;
unsigned short var_8 = (unsigned short)58884;
unsigned int var_9 = 177297201U;
int zero = 0;
unsigned int var_10 = 3346383258U;
unsigned int var_11 = 3648927026U;
unsigned short var_12 = (unsigned short)4350;
unsigned int var_13 = 2125496237U;
_Bool var_14 = (_Bool)1;
unsigned long long int arr_0 [22] ;
short arr_4 [22] ;
signed char arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 9354979592917068425ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)19095;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)9 : (signed char)90;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
