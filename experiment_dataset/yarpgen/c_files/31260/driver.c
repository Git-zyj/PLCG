#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4053647471U;
int var_3 = -318347367;
int var_4 = 1259329343;
int var_6 = 1222575088;
unsigned short var_7 = (unsigned short)26304;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)4615;
unsigned int var_12 = 4211337500U;
unsigned short var_13 = (unsigned short)6420;
int zero = 0;
unsigned short var_14 = (unsigned short)62173;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2640106022U;
unsigned int var_18 = 1463633845U;
unsigned short var_19 = (unsigned short)40531;
unsigned short var_20 = (unsigned short)22947;
int var_21 = 562913819;
unsigned short arr_0 [21] [21] ;
int arr_2 [21] [21] ;
unsigned int arr_5 [21] ;
int arr_9 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)20504;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -330261374;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 618741706U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 218745166;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
