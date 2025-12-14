#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_3 = (short)27730;
unsigned short var_4 = (unsigned short)64489;
unsigned char var_5 = (unsigned char)220;
int var_6 = -1264338625;
_Bool var_11 = (_Bool)0;
int var_12 = 2000186248;
signed char var_14 = (signed char)-51;
int zero = 0;
int var_16 = -1053096358;
int var_17 = 304241355;
unsigned short var_18 = (unsigned short)6253;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-10071;
unsigned short var_21 = (unsigned short)19372;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)97;
unsigned char arr_0 [12] ;
long long int arr_2 [12] ;
unsigned char arr_3 [12] [12] ;
_Bool arr_4 [12] [12] ;
unsigned short arr_9 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1391388494536352731LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)61868 : (unsigned short)63347;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
