#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6217638960638738848LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = -3405774253581922727LL;
unsigned short var_3 = (unsigned short)25504;
unsigned char var_6 = (unsigned char)238;
short var_7 = (short)-14446;
long long int var_8 = 6317313473682601776LL;
short var_10 = (short)7588;
unsigned int var_12 = 4150158521U;
long long int var_13 = 5212067274911838597LL;
long long int var_15 = 6939596300430343900LL;
short var_16 = (short)-23715;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-7165;
int zero = 0;
unsigned char var_20 = (unsigned char)228;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2875863354U;
signed char arr_4 [11] [11] [11] ;
short arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-5732;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
