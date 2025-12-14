#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22535;
unsigned short var_2 = (unsigned short)52162;
long long int var_5 = -368477611261665675LL;
short var_11 = (short)18312;
long long int var_12 = -5712981800353018688LL;
long long int var_14 = -5023492759486440722LL;
int zero = 0;
int var_18 = 2018241543;
short var_19 = (short)26405;
unsigned char var_20 = (unsigned char)122;
short var_21 = (short)-23589;
int arr_1 [21] ;
short arr_2 [21] ;
_Bool arr_3 [21] [21] ;
long long int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1113968449 : -830992445;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)-15007;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7667749501992179621LL : -5792244686210741066LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
