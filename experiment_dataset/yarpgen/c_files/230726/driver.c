#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 55907775;
short var_4 = (short)-6330;
short var_5 = (short)7876;
short var_6 = (short)-5592;
int var_7 = -1818375767;
short var_10 = (short)-1337;
int var_11 = 647963274;
short var_12 = (short)123;
short var_13 = (short)23576;
short var_14 = (short)-1619;
int var_15 = -1848932437;
short var_16 = (short)9772;
short var_17 = (short)-3672;
short var_18 = (short)-21754;
int zero = 0;
int var_19 = 145570302;
short var_20 = (short)9568;
int var_21 = 804968070;
short var_22 = (short)-25845;
int var_23 = 26257500;
short var_24 = (short)-2501;
int var_25 = 1108547656;
int var_26 = -2057088193;
int var_27 = -1840114747;
short arr_0 [24] [24] ;
short arr_1 [24] ;
int arr_6 [24] [24] [24] ;
int arr_7 [24] ;
int arr_8 [24] [24] [24] [24] [24] [24] ;
int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16228;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-26136;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 617423687;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1503940568;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 938480339;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -533712996;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
