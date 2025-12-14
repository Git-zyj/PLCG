#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1431194025;
short var_2 = (short)10903;
unsigned short var_3 = (unsigned short)15361;
int var_5 = 515533972;
unsigned short var_7 = (unsigned short)2794;
unsigned short var_12 = (unsigned short)61738;
short var_14 = (short)-9362;
unsigned short var_15 = (unsigned short)1030;
unsigned short var_17 = (unsigned short)42358;
unsigned short var_19 = (unsigned short)1659;
int zero = 0;
unsigned short var_20 = (unsigned short)5821;
unsigned short var_21 = (unsigned short)24949;
short var_22 = (short)-13873;
unsigned short var_23 = (unsigned short)27309;
unsigned short var_24 = (unsigned short)47263;
unsigned short var_25 = (unsigned short)20785;
int var_26 = 1915638927;
int var_27 = 2002750179;
unsigned short var_28 = (unsigned short)58368;
unsigned short var_29 = (unsigned short)9398;
int var_30 = -1320270392;
unsigned short arr_0 [19] ;
int arr_1 [19] [19] ;
unsigned short arr_2 [19] [19] [19] ;
short arr_3 [19] [19] [19] ;
int arr_4 [19] ;
short arr_6 [19] [19] [19] [19] ;
short arr_8 [19] [19] [19] [19] [19] [19] ;
unsigned short arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)34938;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1694282987;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)3977;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-26505;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -67969185;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)15488 : (short)1774;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-17375;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (unsigned short)11873;
}

void checksum() {
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
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
