#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)154;
short var_2 = (short)-32089;
int var_7 = -593553258;
unsigned short var_8 = (unsigned short)1538;
unsigned int var_12 = 484232371U;
int var_14 = -1520865887;
long long int var_16 = -4816590569863395347LL;
int zero = 0;
int var_17 = 1171416121;
long long int var_18 = 3918133817434521033LL;
int var_19 = 12595616;
unsigned short var_20 = (unsigned short)42083;
long long int arr_0 [12] [12] ;
int arr_1 [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4784968353441507358LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 304814735;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1181440098;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
