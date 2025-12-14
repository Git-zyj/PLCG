#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14846022239113003903ULL;
unsigned short var_2 = (unsigned short)4466;
unsigned long long int var_3 = 11844483376618880810ULL;
unsigned char var_5 = (unsigned char)48;
unsigned short var_10 = (unsigned short)11530;
int zero = 0;
int var_11 = -1568554519;
unsigned int var_12 = 3108898810U;
unsigned int var_13 = 3221743830U;
unsigned int var_14 = 3618788645U;
int var_15 = -462152092;
unsigned long long int arr_0 [16] ;
unsigned short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 12928221563503825623ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)53002;
}

void checksum() {
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
