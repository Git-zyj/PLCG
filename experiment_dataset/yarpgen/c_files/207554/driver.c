#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)25719;
short var_4 = (short)3022;
short var_5 = (short)-7802;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)123;
short var_11 = (short)-10231;
unsigned char var_14 = (unsigned char)188;
int zero = 0;
signed char var_16 = (signed char)-66;
short var_17 = (short)22484;
signed char var_18 = (signed char)-125;
short var_19 = (short)8803;
signed char var_20 = (signed char)-64;
unsigned int arr_0 [11] ;
short arr_4 [24] ;
signed char arr_8 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2508606133U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-31574 : (short)-15605;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)93;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
