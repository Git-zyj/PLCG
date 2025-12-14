#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17614435958042748026ULL;
int var_1 = 323682118;
int var_3 = 1771131663;
int var_4 = 1577089230;
unsigned int var_5 = 1976233617U;
unsigned long long int var_6 = 11617707677984765771ULL;
_Bool var_10 = (_Bool)1;
int var_11 = 1434480616;
int zero = 0;
int var_12 = 1396507406;
int var_13 = -957288802;
unsigned long long int var_14 = 16765647129589806338ULL;
int var_15 = -482695437;
signed char var_16 = (signed char)-127;
_Bool arr_0 [20] ;
unsigned char arr_3 [20] ;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -556731402;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
