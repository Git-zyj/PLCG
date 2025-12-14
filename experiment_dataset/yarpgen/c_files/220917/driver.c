#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33967;
unsigned int var_5 = 4259669843U;
int var_8 = 1047653316;
int var_12 = -1942603223;
unsigned char var_13 = (unsigned char)244;
int var_14 = 125421212;
long long int var_15 = -5249376141349417516LL;
int zero = 0;
signed char var_16 = (signed char)-115;
unsigned char var_17 = (unsigned char)219;
short var_18 = (short)15506;
_Bool var_19 = (_Bool)1;
int var_20 = -1887369062;
int var_21 = 1259587776;
signed char arr_0 [10] ;
short arr_2 [10] ;
_Bool arr_3 [10] ;
int arr_9 [20] [20] ;
unsigned char arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-12259;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 1042030224;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)130;
}

void checksum() {
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
