#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25043;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-5074;
unsigned int var_5 = 2615422191U;
long long int var_7 = -1950757216427378961LL;
signed char var_8 = (signed char)-25;
int var_9 = 867496678;
int zero = 0;
unsigned short var_10 = (unsigned short)20768;
unsigned short var_11 = (unsigned short)15318;
signed char var_12 = (signed char)-10;
int var_13 = 819554341;
unsigned long long int var_14 = 741350108334998447ULL;
short arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-14493 : (short)-16572;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
