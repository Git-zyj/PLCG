#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)91;
unsigned int var_7 = 2156369038U;
unsigned int var_12 = 1200782019U;
int zero = 0;
unsigned int var_20 = 1663309872U;
unsigned char var_21 = (unsigned char)238;
signed char var_22 = (signed char)52;
int var_23 = 1111937378;
short var_24 = (short)-7155;
unsigned char var_25 = (unsigned char)39;
unsigned short var_26 = (unsigned short)49842;
signed char arr_1 [25] ;
signed char arr_2 [25] ;
int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)(-127 - 1) : (signed char)-101;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 761961520;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
