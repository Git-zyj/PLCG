#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21129;
long long int var_4 = 2343050159880172730LL;
int var_6 = -1221173757;
unsigned long long int var_7 = 11529473250696012809ULL;
int var_17 = -976448691;
_Bool var_18 = (_Bool)1;
int var_19 = -200762932;
int zero = 0;
int var_20 = -921457372;
int var_21 = -1376315726;
int var_22 = -911297157;
int var_23 = 1743951508;
unsigned char arr_1 [16] ;
short arr_8 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-21979 : (short)28081;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
