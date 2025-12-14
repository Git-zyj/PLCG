#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2837750159729203864LL;
long long int var_2 = -7798730558269441756LL;
unsigned char var_4 = (unsigned char)210;
unsigned short var_5 = (unsigned short)49768;
unsigned short var_7 = (unsigned short)61280;
unsigned short var_10 = (unsigned short)55793;
int zero = 0;
unsigned int var_12 = 2426864568U;
unsigned short var_13 = (unsigned short)26472;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)123;
int var_16 = 1511287016;
unsigned long long int var_17 = 11028254626417204773ULL;
_Bool arr_3 [23] ;
long long int arr_4 [23] [23] ;
unsigned int arr_8 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2877105983929380188LL : -7793751610936058863LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 193125414U : 3768557626U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
