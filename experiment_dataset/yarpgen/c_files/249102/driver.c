#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17947;
int var_1 = 1874053717;
int var_2 = 88451590;
int var_3 = 1303590143;
int var_4 = 2118728975;
int var_5 = -1429987015;
long long int var_6 = -2446443320316083334LL;
short var_7 = (short)22745;
int var_8 = -1308499918;
int var_9 = 441652587;
int var_10 = -307449730;
int zero = 0;
int var_11 = -1680429336;
int var_12 = 1584112627;
int var_13 = -830948437;
int var_14 = -446973749;
long long int var_15 = -1083389009133761196LL;
short var_16 = (short)-14773;
short var_17 = (short)9748;
int var_18 = -1786698039;
short arr_4 [15] ;
short arr_5 [15] ;
int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)12324 : (short)-5528;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)8039 : (short)-29163;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 267401089;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
