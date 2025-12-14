#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26113;
unsigned int var_4 = 1105364634U;
int var_5 = -1147430583;
unsigned short var_6 = (unsigned short)43818;
unsigned int var_7 = 1876770664U;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 3284240739867508398ULL;
unsigned int var_12 = 1042353334U;
short arr_1 [15] ;
unsigned short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-32732;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)52738;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
