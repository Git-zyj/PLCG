#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39168;
signed char var_2 = (signed char)-34;
short var_3 = (short)-4658;
unsigned long long int var_5 = 17099592724112778836ULL;
unsigned long long int var_6 = 18307342674614354187ULL;
long long int var_8 = -3601667986430860021LL;
unsigned long long int var_10 = 2936901441790572870ULL;
short var_12 = (short)-17458;
unsigned char var_13 = (unsigned char)138;
int var_14 = 842074004;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)42197;
short var_18 = (short)-29020;
short var_19 = (short)21674;
short var_20 = (short)-20261;
short var_21 = (short)-13619;
short var_22 = (short)23528;
signed char var_23 = (signed char)-17;
int var_24 = 1471767848;
unsigned short var_25 = (unsigned short)9046;
unsigned long long int var_26 = 9428599681120380926ULL;
unsigned char arr_1 [21] [21] ;
short arr_13 [22] ;
unsigned long long int arr_15 [22] ;
unsigned long long int arr_16 [22] ;
short arr_12 [21] [21] [21] [21] ;
unsigned short arr_17 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (short)2067;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 13539823560139964315ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 10924365666384848217ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)8215;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)26928;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
