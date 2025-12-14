#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
int var_1 = -1173706255;
unsigned short var_2 = (unsigned short)61610;
int var_4 = -49316075;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)24876;
unsigned long long int var_8 = 6553004953584494425ULL;
int zero = 0;
signed char var_10 = (signed char)40;
short var_11 = (short)6535;
unsigned char var_12 = (unsigned char)172;
short var_13 = (short)-645;
unsigned int var_14 = 2700449889U;
long long int var_15 = -5052755939911904599LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)25428;
int var_18 = -901847262;
unsigned int var_19 = 2141819881U;
unsigned char var_20 = (unsigned char)151;
short var_21 = (short)-23241;
signed char arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
short arr_10 [22] ;
int arr_2 [22] ;
unsigned int arr_3 [22] ;
unsigned int arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 11818048292527236244ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)6618;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -951068842;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 689573017U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 3674911206U : 4186648950U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
