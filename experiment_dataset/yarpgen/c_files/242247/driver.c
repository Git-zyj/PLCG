#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5624200393845690222LL;
unsigned long long int var_2 = 9953888382360771717ULL;
signed char var_3 = (signed char)46;
unsigned int var_6 = 2126884381U;
short var_7 = (short)776;
long long int var_8 = -8934216664519786340LL;
unsigned short var_11 = (unsigned short)2565;
short var_13 = (short)-24016;
int var_14 = 1509825928;
int zero = 0;
signed char var_16 = (signed char)-43;
short var_17 = (short)1139;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-32503;
short var_20 = (short)-12907;
short arr_0 [25] ;
unsigned short arr_1 [25] [25] ;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-15424;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)34612;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)206;
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
