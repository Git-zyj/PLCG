#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3558847311U;
unsigned char var_2 = (unsigned char)146;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)71;
int var_7 = -1486618051;
unsigned char var_9 = (unsigned char)238;
unsigned int var_11 = 1218895076U;
int zero = 0;
int var_13 = -1061303292;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)98;
short arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned short arr_2 [16] [16] [16] ;
_Bool arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)20442;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8381942684600295190ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)32328;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
