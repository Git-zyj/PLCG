#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4079193831U;
unsigned short var_2 = (unsigned short)59442;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)25779;
unsigned short var_7 = (unsigned short)15421;
unsigned short var_8 = (unsigned short)27331;
unsigned short var_10 = (unsigned short)4211;
signed char var_11 = (signed char)-48;
unsigned short var_12 = (unsigned short)64395;
short var_13 = (short)10780;
short var_14 = (short)27491;
signed char var_15 = (signed char)32;
short var_18 = (short)-11190;
int zero = 0;
short var_19 = (short)23609;
short var_20 = (short)29718;
signed char var_21 = (signed char)-103;
unsigned int var_22 = 3485187886U;
unsigned short var_23 = (unsigned short)59616;
short var_24 = (short)-14726;
signed char var_25 = (signed char)-7;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)16054;
short var_28 = (short)25258;
short var_29 = (short)26704;
unsigned int arr_0 [19] ;
unsigned int arr_1 [19] ;
short arr_2 [19] [19] ;
short arr_16 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3924492650U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 2408453845U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)16576;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)4694;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
