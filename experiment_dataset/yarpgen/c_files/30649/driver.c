#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22519;
unsigned char var_1 = (unsigned char)199;
int var_3 = 421792240;
signed char var_4 = (signed char)-64;
unsigned int var_6 = 2586810946U;
unsigned long long int var_7 = 191268849574480397ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)79;
unsigned char var_10 = (unsigned char)32;
int var_11 = -1824308559;
long long int var_12 = 9068999485398360296LL;
int zero = 0;
unsigned char var_13 = (unsigned char)224;
unsigned char var_14 = (unsigned char)246;
signed char var_15 = (signed char)-47;
unsigned int var_16 = 3486537164U;
long long int var_17 = -8440966732751924326LL;
short var_18 = (short)11412;
short var_19 = (short)9864;
signed char var_20 = (signed char)-1;
long long int var_21 = -2319636013501739638LL;
unsigned long long int var_22 = 1231794490102752083ULL;
unsigned long long int var_23 = 5550088997365975062ULL;
short var_24 = (short)25208;
signed char var_25 = (signed char)-15;
short var_26 = (short)5502;
signed char arr_0 [17] ;
int arr_3 [23] [23] ;
short arr_4 [23] ;
unsigned int arr_5 [23] ;
int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1426902312;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)13100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2096675674U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -1525542286;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
