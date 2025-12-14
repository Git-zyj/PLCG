#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 250424072U;
short var_10 = (short)-2615;
unsigned short var_11 = (unsigned short)6448;
unsigned int var_14 = 1347676952U;
int var_15 = -584266682;
unsigned short var_17 = (unsigned short)13771;
int zero = 0;
short var_18 = (short)-8833;
int var_19 = 423819628;
unsigned char var_20 = (unsigned char)32;
unsigned char var_21 = (unsigned char)175;
int var_22 = 1962211400;
unsigned int var_23 = 757503106U;
unsigned char var_24 = (unsigned char)143;
_Bool var_25 = (_Bool)0;
long long int arr_7 [16] [16] [16] ;
long long int arr_9 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -5684379863356749607LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -3730766514824547912LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
