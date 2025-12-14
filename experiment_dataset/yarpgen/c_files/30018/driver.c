#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)119;
short var_6 = (short)-11199;
unsigned int var_8 = 917109348U;
unsigned char var_13 = (unsigned char)19;
unsigned short var_15 = (unsigned short)30045;
int zero = 0;
unsigned char var_18 = (unsigned char)59;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)30773;
unsigned int var_21 = 114661781U;
unsigned short var_22 = (unsigned short)56336;
unsigned short arr_2 [11] ;
signed char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38302 : (unsigned short)14132;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-96;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
