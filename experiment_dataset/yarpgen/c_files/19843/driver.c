#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29913;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 16193990543758237765ULL;
unsigned short var_3 = (unsigned short)15333;
long long int var_4 = -2791304145769487098LL;
long long int var_5 = -7045013082926421583LL;
unsigned long long int var_6 = 14986322453438783066ULL;
short var_9 = (short)31312;
int var_12 = 618403842;
unsigned short var_13 = (unsigned short)42578;
unsigned long long int var_14 = 3681077965983726968ULL;
int var_15 = -1805285008;
short var_16 = (short)-5699;
short var_17 = (short)-13270;
unsigned char var_18 = (unsigned char)126;
int zero = 0;
int var_19 = -937972890;
short var_20 = (short)-7218;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-28299;
long long int var_23 = -3530402633681803732LL;
unsigned short var_24 = (unsigned short)14060;
short var_25 = (short)-9537;
unsigned short var_26 = (unsigned short)33085;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 13575207530874508132ULL;
unsigned char var_29 = (unsigned char)76;
unsigned int var_30 = 986026530U;
int var_31 = -1091283691;
long long int var_32 = 978581109967530300LL;
signed char var_33 = (signed char)-52;
signed char var_34 = (signed char)106;
unsigned short arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
_Bool arr_2 [17] [17] ;
unsigned long long int arr_5 [19] ;
short arr_7 [19] ;
unsigned short arr_8 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)18424;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)29448;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 1183216027439349324ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)31048;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)26551;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
