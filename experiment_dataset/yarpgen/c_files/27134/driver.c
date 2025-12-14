#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20582;
int var_2 = -1631208150;
unsigned long long int var_6 = 7034985881261420164ULL;
signed char var_8 = (signed char)-52;
long long int var_9 = 5507326850651102605LL;
int zero = 0;
int var_12 = -1665935277;
short var_13 = (short)-21661;
unsigned short var_14 = (unsigned short)35680;
int var_15 = -730496892;
short var_16 = (short)-9152;
unsigned int var_17 = 2603758932U;
unsigned short arr_0 [23] ;
signed char arr_1 [23] ;
int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15675 : (unsigned short)20957;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 307900739;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
