#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8951;
short var_2 = (short)-18847;
short var_4 = (short)26177;
unsigned int var_5 = 3696414451U;
unsigned char var_6 = (unsigned char)250;
signed char var_7 = (signed char)118;
long long int var_8 = 4822370965953414137LL;
unsigned int var_9 = 2526574953U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)24211;
int var_12 = 1401477330;
signed char var_14 = (signed char)50;
short var_15 = (short)13914;
int zero = 0;
long long int var_16 = 6161106495585558321LL;
signed char var_17 = (signed char)54;
unsigned char var_18 = (unsigned char)7;
int var_19 = 1697139897;
short arr_4 [12] [12] ;
unsigned char arr_5 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)110;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
