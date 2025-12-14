#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -198071086;
unsigned long long int var_9 = 4141092141818958254ULL;
short var_10 = (short)-16595;
short var_13 = (short)5274;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3084440506U;
unsigned char var_20 = (unsigned char)149;
_Bool var_21 = (_Bool)1;
unsigned long long int arr_1 [18] [18] ;
unsigned char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 2455482611549300809ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)41;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
