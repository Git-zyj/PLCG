#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
unsigned long long int var_1 = 4473531002715598613ULL;
long long int var_3 = 6121810112722787072LL;
_Bool var_4 = (_Bool)1;
int var_6 = -1988716620;
int var_8 = -505962946;
unsigned short var_11 = (unsigned short)10328;
int zero = 0;
unsigned long long int var_13 = 681540129198434036ULL;
long long int var_14 = -329847339110556837LL;
long long int var_15 = 7722086857215526731LL;
short arr_3 [21] ;
long long int arr_4 [21] [21] [21] ;
unsigned short arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)5212;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1106106938109745004LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)43770;
}

void checksum() {
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
