#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)13;
long long int var_1 = -3898264397868926763LL;
long long int var_2 = -6537807097615092759LL;
short var_3 = (short)24735;
unsigned int var_5 = 1081249973U;
long long int var_6 = 8580105527951682051LL;
short var_7 = (short)18995;
short var_8 = (short)19177;
int zero = 0;
unsigned int var_10 = 340949612U;
short var_11 = (short)-31740;
signed char var_12 = (signed char)-1;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned char arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)57919;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)17758;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)169;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
