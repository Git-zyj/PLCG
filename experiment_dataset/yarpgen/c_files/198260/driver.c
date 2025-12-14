#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)22327;
int var_3 = -220590907;
unsigned int var_4 = 3443718638U;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)97;
unsigned short var_7 = (unsigned short)61822;
unsigned long long int var_11 = 8931609873099988893ULL;
short var_12 = (short)-26556;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15476934045935927690ULL;
signed char var_19 = (signed char)-25;
unsigned int var_20 = 3261630043U;
signed char var_21 = (signed char)-5;
unsigned char var_22 = (unsigned char)110;
unsigned long long int var_23 = 12479543804515899791ULL;
unsigned short arr_2 [20] [20] ;
unsigned short arr_14 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)43791;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)5758;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
