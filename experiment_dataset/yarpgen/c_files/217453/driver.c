#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2545096389U;
signed char var_1 = (signed char)-6;
signed char var_2 = (signed char)-9;
unsigned long long int var_3 = 13342563355344388462ULL;
unsigned long long int var_4 = 13479181538223387154ULL;
signed char var_5 = (signed char)-54;
unsigned short var_6 = (unsigned short)61241;
unsigned char var_7 = (unsigned char)101;
int var_8 = 1767634442;
unsigned int var_9 = 3256492706U;
unsigned short var_11 = (unsigned short)65469;
int var_13 = 345867504;
int zero = 0;
unsigned short var_15 = (unsigned short)44250;
unsigned int var_16 = 1946713813U;
unsigned char var_17 = (unsigned char)159;
unsigned char var_18 = (unsigned char)81;
short var_19 = (short)11614;
signed char var_20 = (signed char)80;
unsigned short arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
unsigned short arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)27051;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25784 : (unsigned short)35029;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
