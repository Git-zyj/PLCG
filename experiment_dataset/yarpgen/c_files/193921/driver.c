#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3058020705367174344ULL;
short var_2 = (short)-10270;
unsigned long long int var_3 = 14882062626263091047ULL;
unsigned short var_4 = (unsigned short)34915;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)42601;
unsigned char var_8 = (unsigned char)47;
unsigned int var_9 = 239651285U;
signed char var_10 = (signed char)8;
unsigned char var_11 = (unsigned char)234;
int var_13 = 1221224958;
long long int var_14 = -1796097351601216890LL;
int var_16 = -853407656;
int zero = 0;
unsigned short var_17 = (unsigned short)21853;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 7751406449634975799ULL;
signed char var_20 = (signed char)-80;
int var_21 = -1728251007;
_Bool var_22 = (_Bool)0;
int var_23 = 2036314582;
short var_24 = (short)25244;
long long int arr_1 [20] [20] ;
int arr_2 [20] ;
_Bool arr_3 [20] [20] ;
unsigned short arr_4 [20] [20] ;
unsigned char arr_9 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1332982314744624427LL : 2565794657621641291LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1716847499;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)17840 : (unsigned short)56428;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)184 : (unsigned char)139;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
