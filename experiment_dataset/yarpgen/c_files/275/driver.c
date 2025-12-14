#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
unsigned short var_2 = (unsigned short)14781;
short var_4 = (short)-30147;
unsigned int var_6 = 3331634448U;
unsigned char var_7 = (unsigned char)130;
unsigned char var_8 = (unsigned char)119;
signed char var_9 = (signed char)91;
int var_10 = 1531495238;
int zero = 0;
unsigned short var_11 = (unsigned short)14450;
unsigned int var_12 = 1228185288U;
unsigned int var_13 = 357543334U;
signed char var_14 = (signed char)-49;
unsigned char var_15 = (unsigned char)105;
unsigned int var_16 = 107214862U;
long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -6544408156061775208LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 15712244948876235110ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
