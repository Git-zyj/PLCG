#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 325202441387156578LL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)105;
unsigned short var_3 = (unsigned short)40055;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)112;
unsigned short var_6 = (unsigned short)15622;
unsigned long long int var_7 = 12222353661941952105ULL;
unsigned char var_8 = (unsigned char)110;
int var_9 = 1137156958;
unsigned long long int var_10 = 7431114937577279224ULL;
unsigned char var_11 = (unsigned char)254;
unsigned short var_12 = (unsigned short)55407;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)57751;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)254;
short arr_0 [22] [22] ;
signed char arr_1 [22] ;
int arr_2 [22] ;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)32361;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 2112429446;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 15847003854711028507ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
