#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 499624341;
unsigned int var_1 = 2771349077U;
short var_4 = (short)-21946;
unsigned char var_7 = (unsigned char)183;
short var_9 = (short)-25463;
unsigned long long int var_11 = 4245890699550452648ULL;
unsigned long long int var_14 = 897916912363188478ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -3977288123658563729LL;
long long int var_18 = -4506909447196488762LL;
int zero = 0;
short var_19 = (short)-29112;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)223;
unsigned char var_22 = (unsigned char)230;
_Bool var_23 = (_Bool)1;
int var_24 = -1509754042;
short var_25 = (short)-26689;
short arr_0 [20] ;
unsigned char arr_2 [20] [20] ;
short arr_3 [20] ;
signed char arr_4 [20] [20] ;
short arr_5 [20] [20] ;
_Bool arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-13215;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)12688;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (short)11460;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
