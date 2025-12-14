#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2037202262U;
unsigned int var_1 = 543058571U;
unsigned int var_2 = 3850833887U;
int var_3 = -1353746992;
int var_4 = 725248191;
signed char var_5 = (signed char)61;
unsigned int var_7 = 915585311U;
unsigned int var_8 = 4117217184U;
unsigned int var_9 = 1747650555U;
unsigned short var_10 = (unsigned short)47183;
int zero = 0;
long long int var_11 = -2215056273167351162LL;
unsigned int var_12 = 780054496U;
unsigned int var_13 = 3027559617U;
unsigned char var_14 = (unsigned char)69;
unsigned char var_15 = (unsigned char)146;
unsigned int arr_6 [16] [16] [16] ;
unsigned short arr_9 [16] [16] ;
int arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3163864567U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)6414;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 1301317870 : 1573633946;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
