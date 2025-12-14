#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 7880409798635988712ULL;
unsigned short var_5 = (unsigned short)30605;
unsigned int var_6 = 1183800002U;
short var_9 = (short)-8305;
int zero = 0;
long long int var_12 = -1612127968279633667LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)139;
long long int var_15 = 4710570981544019698LL;
unsigned char arr_0 [21] ;
unsigned char arr_1 [21] ;
short arr_3 [21] [21] [21] ;
short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-9392;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)-1562;
}

void checksum() {
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
