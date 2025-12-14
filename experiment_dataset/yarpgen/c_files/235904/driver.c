#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)17214;
short var_4 = (short)7933;
signed char var_9 = (signed char)116;
short var_13 = (short)-28167;
unsigned short var_14 = (unsigned short)35191;
int zero = 0;
short var_18 = (short)16250;
signed char var_19 = (signed char)-40;
long long int var_20 = 5722778173205690727LL;
signed char var_21 = (signed char)-86;
unsigned long long int var_22 = 5198770720549144854ULL;
_Bool var_23 = (_Bool)1;
int var_24 = -235092577;
unsigned char var_25 = (unsigned char)95;
short var_26 = (short)31240;
unsigned long long int var_27 = 10749403325492637722ULL;
long long int var_28 = 6222726981070440575LL;
long long int var_29 = 7214552082625028210LL;
short arr_0 [23] [23] ;
unsigned short arr_2 [15] ;
unsigned long long int arr_5 [15] [15] ;
unsigned char arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20669 : (short)-2723;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51896 : (unsigned short)58670;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 14030332355698396127ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)56;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
