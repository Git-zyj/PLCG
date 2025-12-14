#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3505718038U;
int var_1 = 1707267956;
int var_2 = -1504595275;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)123;
unsigned char var_16 = (unsigned char)58;
int zero = 0;
unsigned int var_17 = 1508378165U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2670296411U;
unsigned long long int var_20 = 10485382161836465404ULL;
unsigned short var_21 = (unsigned short)54591;
int var_22 = -2045957458;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)102;
unsigned long long int var_25 = 10400180905395856351ULL;
unsigned short arr_5 [17] ;
int arr_6 [17] [17] [17] [17] ;
unsigned long long int arr_12 [17] [17] [17] ;
unsigned int arr_18 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33928 : (unsigned short)56082;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 462697680 : 96409742;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2652436014501228055ULL : 11257443752522488759ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = 808042425U;
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
