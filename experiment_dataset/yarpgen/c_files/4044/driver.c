#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27305;
short var_1 = (short)8492;
int var_2 = -1230079294;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)211;
int zero = 0;
long long int var_15 = 4734330365190709354LL;
unsigned short var_16 = (unsigned short)34420;
unsigned int var_17 = 3080044389U;
signed char var_18 = (signed char)34;
signed char var_19 = (signed char)41;
unsigned int var_20 = 4144274119U;
long long int var_21 = -8781303334277181874LL;
short arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
unsigned char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)20008 : (short)-4718;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)18;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
