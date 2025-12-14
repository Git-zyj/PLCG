#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -1921782969352668484LL;
short var_2 = (short)-25956;
_Bool var_3 = (_Bool)1;
long long int var_4 = 7755322282084344323LL;
int var_5 = 787735764;
short var_6 = (short)-698;
int var_7 = 283897276;
signed char var_8 = (signed char)-106;
signed char var_9 = (signed char)72;
long long int var_10 = 3616857331526753239LL;
int var_11 = -1856836129;
int var_12 = -1375348985;
unsigned char var_13 = (unsigned char)245;
short var_15 = (short)-17312;
short var_16 = (short)-28791;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 6825296438766884503ULL;
signed char var_20 = (signed char)-114;
short var_21 = (short)1975;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-19769;
signed char var_24 = (signed char)72;
_Bool var_25 = (_Bool)0;
int var_26 = 431229732;
_Bool var_27 = (_Bool)0;
unsigned long long int arr_9 [18] ;
int arr_10 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 17626244653085117781ULL : 17408188553393016009ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1359599537 : 2029250094;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
