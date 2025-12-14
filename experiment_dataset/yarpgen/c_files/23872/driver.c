#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-16;
int var_7 = -510489333;
_Bool var_12 = (_Bool)1;
int var_14 = -1995385132;
unsigned char var_15 = (unsigned char)172;
short var_17 = (short)-19163;
int zero = 0;
unsigned long long int var_18 = 2007871345838787091ULL;
short var_19 = (short)-29061;
unsigned char var_20 = (unsigned char)170;
signed char var_21 = (signed char)3;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)63346;
unsigned char arr_1 [16] ;
short arr_2 [16] [16] ;
_Bool arr_4 [16] [16] [16] [16] ;
short arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)26387;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (short)9013;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
