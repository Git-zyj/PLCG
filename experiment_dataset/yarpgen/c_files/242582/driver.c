#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5734248554159396138ULL;
signed char var_1 = (signed char)68;
short var_2 = (short)-29002;
int var_3 = 1795260614;
short var_4 = (short)1481;
int var_5 = -1624077493;
_Bool var_6 = (_Bool)1;
int var_7 = 218251909;
unsigned long long int var_8 = 5443808868685972173ULL;
unsigned long long int var_9 = 6095186177030047309ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 9352554825807668825ULL;
short var_13 = (short)-4493;
int zero = 0;
short var_14 = (short)27027;
unsigned char var_15 = (unsigned char)53;
signed char var_16 = (signed char)-54;
unsigned char var_17 = (unsigned char)34;
unsigned int var_18 = 4281956652U;
signed char var_19 = (signed char)114;
unsigned char arr_0 [10] ;
unsigned char arr_1 [10] ;
int arr_6 [12] ;
long long int arr_7 [12] ;
unsigned long long int arr_8 [12] ;
unsigned long long int arr_9 [12] [12] ;
signed char arr_10 [12] ;
unsigned long long int arr_2 [10] ;
unsigned int arr_3 [10] ;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_11 [12] [12] ;
unsigned short arr_12 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)253 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1463883646 : 1563531845;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 2696167048224712325LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 2604562037524447225ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 13761461397990947629ULL : 14921964518147279236ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2854599199978875428ULL : 948883748324670390ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3755337520U : 3501725704U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5279374556883163744ULL : 4992885680651805648ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 8445912954683075329ULL : 1303546253106921531ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)62720 : (unsigned short)16330;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
