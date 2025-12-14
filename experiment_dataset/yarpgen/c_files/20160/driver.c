#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20029;
short var_1 = (short)-26166;
short var_2 = (short)30874;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 14166112444437295833ULL;
short var_8 = (short)-19557;
long long int var_10 = 3178663124884129596LL;
unsigned short var_11 = (unsigned short)15426;
int var_12 = -638366450;
unsigned long long int var_13 = 3302496261694195599ULL;
unsigned short var_14 = (unsigned short)45341;
short var_15 = (short)27979;
unsigned short var_16 = (unsigned short)65380;
signed char var_17 = (signed char)119;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
unsigned short var_19 = (unsigned short)23779;
unsigned short var_20 = (unsigned short)8220;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 6430399447501638967ULL;
unsigned short var_23 = (unsigned short)34923;
unsigned char arr_0 [20] ;
signed char arr_1 [20] ;
short arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-3080;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
