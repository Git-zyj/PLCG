#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2748937395U;
long long int var_2 = 5590483769502451389LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)30;
_Bool var_7 = (_Bool)0;
unsigned int var_12 = 2945738642U;
unsigned long long int var_13 = 10568934522397036780ULL;
int var_14 = -389791725;
unsigned int var_17 = 4108270659U;
int zero = 0;
unsigned long long int var_18 = 8813823812766331069ULL;
unsigned short var_19 = (unsigned short)47293;
unsigned int var_20 = 610229750U;
unsigned short var_21 = (unsigned short)25011;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 13647392704650620396ULL;
unsigned char var_24 = (unsigned char)121;
unsigned short var_25 = (unsigned short)8906;
signed char var_26 = (signed char)-31;
unsigned char var_27 = (unsigned char)200;
unsigned int arr_0 [10] [10] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1354867588U : 273924512U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4079680896U : 930226418U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
