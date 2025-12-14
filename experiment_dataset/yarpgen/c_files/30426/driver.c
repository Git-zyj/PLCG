#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
long long int var_3 = 7793115712339628079LL;
signed char var_5 = (signed char)-9;
long long int var_6 = -4657558270573907996LL;
signed char var_9 = (signed char)113;
unsigned short var_13 = (unsigned short)44225;
unsigned char var_14 = (unsigned char)88;
unsigned char var_16 = (unsigned char)11;
int var_17 = 1138552292;
int zero = 0;
long long int var_19 = 8378369324622698311LL;
long long int var_20 = -1584017499742514677LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -5110857593393023039LL;
short var_23 = (short)-2848;
unsigned char var_24 = (unsigned char)130;
long long int var_25 = 3656335743505675807LL;
unsigned char var_26 = (unsigned char)174;
unsigned char var_27 = (unsigned char)202;
signed char var_28 = (signed char)64;
unsigned long long int arr_3 [13] ;
short arr_4 [13] [13] ;
int arr_5 [18] ;
unsigned char arr_6 [18] ;
int arr_7 [18] ;
short arr_8 [18] ;
signed char arr_9 [18] ;
unsigned char arr_10 [18] [18] ;
long long int arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4911229010591233228ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)23343;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1011567222;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -2103214286;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-23234 : (short)-14075;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)88 : (signed char)-86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)137 : (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 3930356508223781170LL : -7579499141406558808LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
