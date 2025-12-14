#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-20941;
unsigned short var_5 = (unsigned short)11071;
unsigned long long int var_6 = 3355602641466497454ULL;
short var_7 = (short)7065;
unsigned short var_8 = (unsigned short)12679;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_12 = (short)10640;
unsigned short var_13 = (unsigned short)10366;
long long int var_14 = -1950033535426549236LL;
unsigned int var_15 = 76422926U;
unsigned short var_16 = (unsigned short)18156;
_Bool arr_0 [22] [22] ;
_Bool arr_1 [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -2064777309647417128LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
