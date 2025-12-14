#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7285845331604102288LL;
short var_1 = (short)22037;
unsigned long long int var_2 = 7520652219634769899ULL;
unsigned int var_3 = 183985473U;
unsigned int var_4 = 3159100689U;
unsigned long long int var_5 = 17468174163775051610ULL;
short var_6 = (short)-26231;
unsigned short var_7 = (unsigned short)38610;
long long int var_8 = 196825784058045489LL;
unsigned short var_9 = (unsigned short)10467;
long long int var_10 = -5920275264139753593LL;
unsigned short var_11 = (unsigned short)28013;
long long int var_12 = 3117946849173192212LL;
unsigned int var_13 = 641865169U;
unsigned long long int var_14 = 4802320782780022659ULL;
unsigned short var_15 = (unsigned short)24824;
int zero = 0;
unsigned short var_16 = (unsigned short)41717;
long long int var_17 = -7951871268799103874LL;
short var_18 = (short)18037;
unsigned int var_19 = 1898543164U;
short var_20 = (short)22518;
signed char var_21 = (signed char)-81;
unsigned long long int var_22 = 549022736749395995ULL;
unsigned long long int var_23 = 9674535882489990043ULL;
unsigned int var_24 = 1570391153U;
unsigned long long int var_25 = 6599227514170846379ULL;
_Bool var_26 = (_Bool)0;
long long int var_27 = -1906104536821934649LL;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 498841539U;
unsigned char var_30 = (unsigned char)234;
signed char var_31 = (signed char)-90;
unsigned int var_32 = 2972428009U;
unsigned int var_33 = 2055689047U;
unsigned char var_34 = (unsigned char)23;
long long int var_35 = 5755102955321544423LL;
unsigned long long int var_36 = 11406748492764431379ULL;
unsigned long long int arr_8 [16] [16] [16] ;
unsigned int arr_9 [16] [16] [16] ;
unsigned long long int arr_22 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 18015586189650465183ULL : 533342598097281120ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1357929811U : 1000866628U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 8632738178944827361ULL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
