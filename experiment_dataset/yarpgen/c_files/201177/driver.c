#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
long long int var_1 = 2804502356753613056LL;
int var_2 = 125179172;
short var_3 = (short)-11686;
unsigned long long int var_4 = 12528939201060848402ULL;
int var_5 = -1181757375;
long long int var_6 = -298484454060149042LL;
long long int var_7 = 36654701400727089LL;
unsigned short var_8 = (unsigned short)64157;
unsigned int var_10 = 2985380224U;
short var_11 = (short)19231;
long long int var_12 = -3692210654464384569LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5844708486353715416LL;
unsigned short var_16 = (unsigned short)13422;
unsigned long long int var_17 = 18291181724545303595ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)84;
short arr_1 [14] ;
int arr_5 [24] [24] ;
long long int arr_6 [24] [24] ;
int arr_7 [24] ;
long long int arr_8 [24] [24] ;
_Bool arr_11 [24] [24] [24] ;
unsigned char arr_12 [24] ;
int arr_13 [24] [24] ;
long long int arr_15 [24] [24] ;
short arr_17 [24] ;
_Bool arr_18 [24] ;
unsigned long long int arr_21 [24] ;
unsigned char arr_23 [24] ;
_Bool arr_3 [14] [14] ;
short arr_4 [14] [14] ;
signed char arr_9 [24] ;
long long int arr_10 [24] ;
short arr_14 [24] [24] [24] ;
unsigned int arr_19 [24] [24] ;
unsigned long long int arr_20 [24] ;
_Bool arr_24 [24] ;
signed char arr_25 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-19985;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -358769304;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 7304406841787886481LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -123945226;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 8256077861012310261LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = 805421634;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = -7925789920802702054LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)-2756 : (short)-8103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 3801285190422352838ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)5330;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)47;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -6493635359848216614LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)-25821;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? 3699210394U : 3735559049U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 16672097010264400266ULL : 6814000489593809188ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (signed char)-111;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
