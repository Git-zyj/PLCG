#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5774;
unsigned char var_6 = (unsigned char)10;
int var_7 = 1627246992;
int var_8 = -1023747920;
unsigned short var_10 = (unsigned short)27968;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 76233908U;
int var_17 = -1211526520;
short var_18 = (short)-31930;
int zero = 0;
unsigned long long int var_19 = 6676547394192177450ULL;
unsigned int var_20 = 3403240536U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)178;
short var_23 = (short)-32445;
unsigned int var_24 = 2504090636U;
_Bool arr_0 [25] ;
unsigned int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 271089147U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
