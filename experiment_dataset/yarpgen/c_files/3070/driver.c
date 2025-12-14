#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8289329313389453204LL;
unsigned int var_1 = 2522237190U;
unsigned int var_3 = 895511675U;
unsigned int var_6 = 1407749460U;
int var_7 = -1664781990;
long long int var_11 = -1931698193519619006LL;
int zero = 0;
unsigned long long int var_13 = 7700663850231653328ULL;
short var_14 = (short)7142;
unsigned int var_15 = 1999610296U;
short var_16 = (short)23578;
unsigned int arr_3 [11] [11] ;
unsigned char arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3048385635U : 2426778056U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)25;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
