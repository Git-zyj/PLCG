#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
short var_7 = (short)-31981;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-17633;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)134;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-39;
int zero = 0;
short var_17 = (short)-3693;
short var_18 = (short)-5880;
unsigned char var_19 = (unsigned char)194;
_Bool var_20 = (_Bool)0;
short var_21 = (short)27707;
unsigned char var_22 = (unsigned char)186;
short var_23 = (short)-29748;
_Bool arr_0 [12] ;
signed char arr_1 [12] ;
short arr_2 [12] ;
signed char arr_6 [15] ;
short arr_9 [12] ;
unsigned char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)21506;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (short)-26440;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)23 : (unsigned char)86;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
