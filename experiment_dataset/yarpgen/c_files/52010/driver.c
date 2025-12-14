#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50227;
int var_3 = -798501043;
int var_4 = 383955192;
unsigned char var_5 = (unsigned char)7;
long long int var_7 = 5669514986599407593LL;
long long int var_8 = -7526205263481846175LL;
int var_9 = 1643300600;
int zero = 0;
int var_10 = -836694890;
int var_11 = -1606811192;
short var_12 = (short)6466;
signed char var_13 = (signed char)0;
int arr_1 [11] ;
unsigned char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 185669586;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)190;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
