#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-54;
unsigned short var_7 = (unsigned short)4148;
signed char var_14 = (signed char)122;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-23035;
unsigned int var_20 = 478397202U;
long long int var_21 = -364650412571863333LL;
_Bool var_22 = (_Bool)0;
short var_23 = (short)31418;
unsigned short var_24 = (unsigned short)2182;
unsigned char var_25 = (unsigned char)128;
unsigned short var_26 = (unsigned short)49975;
unsigned short arr_0 [18] [18] ;
unsigned long long int arr_3 [21] ;
unsigned long long int arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)64814 : (unsigned short)49480;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2094324026185917317ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 13785033667003623021ULL : 3138727923125347240ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
