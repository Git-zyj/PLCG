#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
unsigned int var_2 = 4036361809U;
signed char var_4 = (signed char)-72;
unsigned int var_6 = 13955156U;
int zero = 0;
long long int var_11 = -3784095681138991790LL;
unsigned long long int var_12 = 2255648695419396220ULL;
unsigned int var_13 = 693084502U;
unsigned short var_14 = (unsigned short)38038;
unsigned char var_15 = (unsigned char)175;
unsigned char var_16 = (unsigned char)250;
unsigned long long int var_17 = 2733601763077400989ULL;
_Bool arr_1 [13] ;
short arr_2 [13] ;
short arr_5 [13] [13] ;
short arr_7 [13] [13] ;
long long int arr_12 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-12227;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)22006;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (short)23082;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -6319704335104433878LL : -3602384434856176738LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
