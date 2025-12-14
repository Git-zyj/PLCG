#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 392742723U;
unsigned long long int var_7 = 9080327417057106232ULL;
unsigned int var_11 = 3324339996U;
unsigned short var_12 = (unsigned short)52642;
unsigned short var_15 = (unsigned short)13494;
unsigned char var_17 = (unsigned char)212;
int zero = 0;
long long int var_18 = 2452603821712764024LL;
unsigned short var_19 = (unsigned short)63791;
unsigned char var_20 = (unsigned char)31;
long long int var_21 = -8154412270283627256LL;
short var_22 = (short)-26482;
unsigned int var_23 = 4254106666U;
long long int var_24 = -116522442657480399LL;
signed char arr_2 [15] [15] ;
unsigned int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 2886853211U;
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
