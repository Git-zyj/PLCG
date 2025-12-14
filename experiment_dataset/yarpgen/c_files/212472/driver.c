#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21039;
signed char var_6 = (signed char)-12;
signed char var_9 = (signed char)-124;
long long int var_10 = -5352492587000518917LL;
unsigned char var_17 = (unsigned char)135;
int zero = 0;
short var_19 = (short)-3726;
short var_20 = (short)32387;
unsigned short var_21 = (unsigned short)37186;
int var_22 = -1241991570;
short var_23 = (short)-8784;
unsigned short var_24 = (unsigned short)37449;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)19109;
unsigned short arr_0 [10] ;
_Bool arr_1 [10] ;
_Bool arr_2 [10] ;
short arr_4 [10] [10] ;
_Bool arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)58594;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-10486;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
