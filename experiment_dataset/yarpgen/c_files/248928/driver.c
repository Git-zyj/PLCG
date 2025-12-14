#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)35;
short var_4 = (short)10914;
int var_6 = 1456497956;
signed char var_10 = (signed char)17;
unsigned long long int var_11 = 16965462155024451631ULL;
unsigned short var_13 = (unsigned short)63149;
signed char var_14 = (signed char)-7;
int zero = 0;
unsigned char var_16 = (unsigned char)172;
short var_17 = (short)-19657;
long long int var_18 = 8386771325510878591LL;
signed char var_19 = (signed char)124;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)55997;
unsigned short var_22 = (unsigned short)45850;
signed char var_23 = (signed char)92;
int var_24 = -306867294;
signed char var_25 = (signed char)42;
unsigned short var_26 = (unsigned short)62818;
unsigned short var_27 = (unsigned short)31901;
long long int var_28 = 5575525960023761598LL;
signed char var_29 = (signed char)26;
_Bool var_30 = (_Bool)1;
unsigned short arr_0 [15] ;
long long int arr_1 [15] ;
unsigned char arr_3 [15] [15] [15] ;
unsigned char arr_4 [15] ;
int arr_6 [18] ;
short arr_7 [18] [18] ;
signed char arr_8 [17] ;
_Bool arr_9 [17] ;
unsigned char arr_10 [12] [12] ;
unsigned long long int arr_2 [15] ;
unsigned short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)32952;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 6890690312081069554LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)160 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -124826031;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (short)31395;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14308285248351314449ULL : 4647550403810077674ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4687 : (unsigned short)21445;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
