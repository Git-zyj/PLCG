#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6945177076446328378LL;
unsigned short var_5 = (unsigned short)26433;
signed char var_8 = (signed char)-111;
unsigned int var_10 = 3767520613U;
int zero = 0;
unsigned short var_12 = (unsigned short)18225;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-26702;
unsigned char var_15 = (unsigned char)232;
unsigned long long int var_16 = 13680340622428612916ULL;
unsigned long long int arr_0 [12] ;
unsigned int arr_2 [12] ;
unsigned short arr_5 [24] ;
unsigned short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 442523710480075410ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3122015434U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)24438;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)26305;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
