#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13278489760195045310ULL;
long long int var_2 = 5139827332322218659LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2811550829U;
unsigned short var_7 = (unsigned short)31581;
signed char var_8 = (signed char)-75;
unsigned short var_9 = (unsigned short)50250;
int zero = 0;
signed char var_10 = (signed char)77;
unsigned int var_11 = 1190861644U;
short var_12 = (short)-24450;
unsigned int var_13 = 1807708460U;
int var_14 = 2068937519;
long long int var_15 = -5026759312607467800LL;
unsigned char arr_0 [22] ;
unsigned int arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4051484928U : 979647440U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
