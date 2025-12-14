#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9086909731625923941LL;
signed char var_6 = (signed char)10;
short var_7 = (short)9940;
long long int var_9 = 2719747489458816102LL;
signed char var_12 = (signed char)-39;
unsigned int var_13 = 2337698869U;
int zero = 0;
signed char var_17 = (signed char)61;
signed char var_18 = (signed char)27;
unsigned short var_19 = (unsigned short)32484;
unsigned int var_20 = 932811701U;
long long int var_21 = 461743400429107107LL;
short var_22 = (short)-11974;
signed char var_23 = (signed char)11;
_Bool var_24 = (_Bool)1;
int var_25 = -1716820059;
unsigned short arr_0 [23] [23] ;
unsigned int arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned short arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)62543 : (unsigned short)26188;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 296842277U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)45472;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)29642;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
