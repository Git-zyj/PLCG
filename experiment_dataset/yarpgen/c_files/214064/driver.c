#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 43948431;
unsigned short var_3 = (unsigned short)5509;
int var_5 = 1073629921;
int var_8 = -651369432;
int var_10 = 1700269859;
int var_11 = 686415459;
unsigned long long int var_14 = 7650624211231990063ULL;
signed char var_15 = (signed char)27;
short var_17 = (short)16508;
int var_19 = 784850644;
int zero = 0;
long long int var_20 = 2629452952316381516LL;
long long int var_21 = -7518403989168897192LL;
unsigned short var_22 = (unsigned short)28234;
signed char var_23 = (signed char)-40;
signed char var_24 = (signed char)-10;
unsigned int var_25 = 3156926365U;
int var_26 = 447014891;
int var_27 = -1669713183;
unsigned int arr_4 [20] ;
_Bool arr_6 [20] [20] ;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 3038352165U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -68437958;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
