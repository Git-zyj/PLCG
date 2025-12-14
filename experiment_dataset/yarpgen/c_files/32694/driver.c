#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5435400307439380999LL;
signed char var_2 = (signed char)77;
unsigned int var_5 = 126245674U;
signed char var_7 = (signed char)83;
short var_8 = (short)-32212;
unsigned char var_9 = (unsigned char)177;
long long int var_10 = -7225179868836533530LL;
int var_12 = 181656373;
unsigned short var_13 = (unsigned short)55994;
unsigned char var_14 = (unsigned char)227;
int zero = 0;
signed char var_15 = (signed char)36;
unsigned short var_16 = (unsigned short)31710;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7261001293801911499LL;
int var_19 = -1695756713;
unsigned short arr_1 [21] ;
signed char arr_2 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)8262;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-60;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
