#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 1978030597569196037LL;
int var_2 = -1351951332;
unsigned short var_3 = (unsigned short)42932;
long long int var_4 = -3765248029840712710LL;
int var_5 = -845926093;
int var_6 = -1480392066;
short var_8 = (short)21415;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-24847;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)63078;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6908770961596153400LL;
unsigned short var_16 = (unsigned short)56151;
signed char var_17 = (signed char)97;
unsigned char var_18 = (unsigned char)243;
int var_19 = 1686583292;
long long int var_20 = 6356635704766127311LL;
int arr_1 [11] [11] ;
unsigned short arr_3 [24] ;
_Bool arr_4 [24] ;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -1478414302;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)32715;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1024911739;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
