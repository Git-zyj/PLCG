#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-77;
unsigned short var_1 = (unsigned short)14920;
int var_3 = 33164321;
short var_7 = (short)-20527;
short var_8 = (short)-13805;
short var_9 = (short)23559;
unsigned short var_11 = (unsigned short)61908;
unsigned short var_12 = (unsigned short)64675;
long long int var_16 = -1450963805898074933LL;
unsigned char var_17 = (unsigned char)222;
unsigned long long int var_18 = 6579811639959018812ULL;
unsigned int var_19 = 1176688154U;
int zero = 0;
unsigned char var_20 = (unsigned char)152;
signed char var_21 = (signed char)-88;
signed char var_22 = (signed char)16;
unsigned int arr_1 [25] ;
int arr_2 [25] [25] [25] ;
short arr_3 [25] [25] [25] ;
signed char arr_4 [25] [25] [25] ;
int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3831590680U : 2480559201U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 217778183;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)944 : (short)15295;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-81 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -533111674 : 1854410669;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
