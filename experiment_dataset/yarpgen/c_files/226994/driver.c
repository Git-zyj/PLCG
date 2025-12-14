#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
signed char var_2 = (signed char)56;
unsigned char var_3 = (unsigned char)60;
long long int var_4 = -5503036229629368895LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
signed char var_13 = (signed char)-72;
short var_14 = (short)-14246;
unsigned int var_15 = 1529932608U;
unsigned short var_16 = (unsigned short)58672;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)53;
short var_19 = (short)-19554;
signed char var_20 = (signed char)-79;
short var_21 = (short)-1316;
unsigned char arr_0 [16] ;
int arr_2 [16] [16] ;
_Bool arr_3 [16] ;
signed char arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 1334096763;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)72;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
