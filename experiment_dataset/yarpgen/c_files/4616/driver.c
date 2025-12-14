#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13717;
unsigned int var_2 = 3357285651U;
unsigned long long int var_5 = 5940717618454568394ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)34531;
unsigned short var_9 = (unsigned short)33643;
int var_11 = 1362314375;
signed char var_12 = (signed char)35;
int zero = 0;
unsigned long long int var_14 = 717832054870311986ULL;
unsigned long long int var_15 = 16460352538313071437ULL;
unsigned char var_16 = (unsigned char)15;
short var_17 = (short)-25519;
unsigned long long int var_18 = 1135674366461904420ULL;
unsigned long long int var_19 = 14769316005654296934ULL;
unsigned long long int arr_1 [24] ;
_Bool arr_2 [24] ;
short arr_3 [24] [24] [24] ;
unsigned long long int arr_12 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 15814428899589666711ULL : 2256682492686900524ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)30479 : (short)807;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 9162135048986012764ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
