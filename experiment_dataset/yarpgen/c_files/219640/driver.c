#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20261;
long long int var_1 = -3858966687086226922LL;
unsigned short var_3 = (unsigned short)20925;
signed char var_4 = (signed char)-17;
unsigned long long int var_5 = 4152352322669779181ULL;
unsigned short var_6 = (unsigned short)30175;
unsigned char var_7 = (unsigned char)160;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2490120643U;
signed char var_11 = (signed char)68;
long long int var_12 = -6648864280459553999LL;
unsigned char var_15 = (unsigned char)55;
unsigned short var_16 = (unsigned short)10662;
short var_17 = (short)-31659;
int zero = 0;
signed char var_18 = (signed char)85;
long long int var_19 = -1387979185385734201LL;
unsigned short var_20 = (unsigned short)59598;
int var_21 = 984232093;
unsigned int var_22 = 2703415636U;
long long int var_23 = -3316185462666953739LL;
long long int var_24 = 2719494826034550154LL;
unsigned int var_25 = 2261695999U;
unsigned long long int var_26 = 7166200150442583201ULL;
signed char arr_0 [12] ;
unsigned short arr_1 [12] ;
short arr_2 [12] ;
unsigned char arr_6 [21] ;
unsigned short arr_7 [21] ;
unsigned long long int arr_3 [12] ;
unsigned long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)19320;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)10781 : (short)28421;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)47367;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 15114421744777755186ULL : 2989059531626135629ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 523934351915400113ULL : 17647855152587947118ULL;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
