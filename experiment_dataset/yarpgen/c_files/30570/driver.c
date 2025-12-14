#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17740;
signed char var_1 = (signed char)57;
long long int var_4 = 8464898063204146792LL;
unsigned short var_5 = (unsigned short)10950;
unsigned int var_6 = 1738127802U;
long long int var_8 = 1012633436436393280LL;
short var_12 = (short)22971;
short var_14 = (short)-8077;
long long int var_16 = -1751460178022893896LL;
unsigned char var_17 = (unsigned char)117;
short var_19 = (short)16717;
int zero = 0;
unsigned char var_20 = (unsigned char)58;
short var_21 = (short)-6624;
signed char var_22 = (signed char)-84;
unsigned short var_23 = (unsigned short)57912;
signed char arr_1 [10] ;
unsigned long long int arr_2 [10] ;
signed char arr_3 [10] ;
long long int arr_5 [10] [10] [10] ;
short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 354508539964906523ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6784190357501512406LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-17711;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
