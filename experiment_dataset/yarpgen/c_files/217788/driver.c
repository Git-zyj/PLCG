#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8917097149291974671LL;
unsigned long long int var_8 = 1569854113463385514ULL;
short var_11 = (short)29023;
signed char var_16 = (signed char)-59;
unsigned char var_19 = (unsigned char)117;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)34191;
unsigned long long int var_23 = 17972315155528306852ULL;
short var_24 = (short)-20055;
long long int var_25 = 3454158548223135111LL;
unsigned long long int var_26 = 332400575991207443ULL;
unsigned short var_27 = (unsigned short)59309;
short var_28 = (short)6753;
int var_29 = 699780959;
unsigned char var_30 = (unsigned char)219;
unsigned long long int arr_2 [16] [16] ;
unsigned char arr_3 [16] [16] [16] ;
_Bool arr_4 [16] ;
long long int arr_13 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 9090257109244141210ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = 4658048682135753440LL;
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
