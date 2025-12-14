#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)39;
unsigned int var_5 = 137892642U;
unsigned char var_6 = (unsigned char)111;
signed char var_7 = (signed char)56;
short var_8 = (short)10808;
unsigned char var_11 = (unsigned char)134;
unsigned short var_16 = (unsigned short)15581;
int zero = 0;
int var_19 = 1133665003;
unsigned char var_20 = (unsigned char)95;
unsigned long long int var_21 = 9273323880129540192ULL;
int arr_0 [13] ;
signed char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -214907562;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-22;
}

void checksum() {
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
