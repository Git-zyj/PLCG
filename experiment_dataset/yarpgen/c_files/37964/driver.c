#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4720989879650700760LL;
short var_2 = (short)4287;
int var_3 = -1598903487;
unsigned int var_4 = 3052574099U;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-84;
signed char var_8 = (signed char)-14;
short var_9 = (short)-29344;
int var_10 = 1815169470;
unsigned short var_11 = (unsigned short)36627;
short var_12 = (short)28623;
short var_14 = (short)2974;
long long int var_16 = -1990074658057723720LL;
unsigned short var_17 = (unsigned short)52124;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-1;
int zero = 0;
long long int var_20 = 2066840317478221948LL;
short var_21 = (short)23621;
unsigned long long int var_22 = 3203171226273384269ULL;
signed char var_23 = (signed char)110;
unsigned short var_24 = (unsigned short)32882;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)4628;
short var_27 = (short)14616;
unsigned long long int var_28 = 12355541953012029558ULL;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)9899;
signed char var_31 = (signed char)-76;
signed char var_32 = (signed char)-107;
int var_33 = 1387517965;
signed char var_34 = (signed char)87;
long long int var_35 = -3169058625036439954LL;
int var_36 = -577540383;
long long int var_37 = 3838685937532822732LL;
unsigned long long int arr_0 [21] [21] ;
unsigned short arr_1 [21] [21] ;
short arr_2 [21] ;
unsigned int arr_3 [21] ;
unsigned int arr_4 [18] ;
int arr_5 [18] [18] ;
_Bool arr_6 [18] ;
long long int arr_7 [18] ;
_Bool arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [18] [18] ;
long long int arr_10 [18] [18] [18] [18] ;
int arr_11 [18] [18] [18] ;
unsigned short arr_12 [14] ;
unsigned long long int arr_13 [14] ;
int arr_16 [14] ;
unsigned char arr_17 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3053577220339402351ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)23432;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)20209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2706085645U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1079136152U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 683313850 : -1603277311;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -2702033568026525825LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 14305796503418150984ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1754339455988425201LL : 776726328396705491LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -1837156652;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned short)52656;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 8926736998769753781ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 1578062282;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)28 : (unsigned char)200;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
