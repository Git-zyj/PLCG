#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 15121107839739020474ULL;
int var_4 = 1446765127;
_Bool var_7 = (_Bool)0;
int var_8 = -1541711448;
int var_10 = -2023794740;
int var_11 = 1478565188;
int var_12 = -533588879;
int zero = 0;
unsigned short var_15 = (unsigned short)58605;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 16289475699665050028ULL;
unsigned long long int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 758849899188119418ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
