#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26463;
long long int var_3 = -2574667856965559903LL;
short var_4 = (short)-24054;
short var_7 = (short)-5505;
signed char var_9 = (signed char)-115;
unsigned short var_10 = (unsigned short)61183;
unsigned int var_12 = 1993671049U;
short var_16 = (short)8008;
unsigned long long int var_17 = 12600290182767487167ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)246;
short var_19 = (short)-21702;
unsigned char var_20 = (unsigned char)148;
short var_21 = (short)3007;
signed char var_22 = (signed char)(-127 - 1);
int var_23 = 698390089;
_Bool arr_1 [15] [15] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)27;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
