#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5368763210619463078ULL;
long long int var_2 = 3884524479357300917LL;
unsigned long long int var_3 = 2832003046485444121ULL;
unsigned int var_4 = 2260414464U;
unsigned char var_5 = (unsigned char)231;
long long int var_6 = 3302827783102777049LL;
unsigned int var_8 = 3765132860U;
unsigned int var_9 = 1489201228U;
unsigned short var_11 = (unsigned short)6578;
unsigned short var_12 = (unsigned short)756;
int var_13 = 36194946;
int zero = 0;
long long int var_14 = 2865100745503981477LL;
unsigned short var_15 = (unsigned short)61525;
unsigned long long int var_16 = 7159224373197927943ULL;
long long int var_17 = -2158709286027738860LL;
unsigned long long int var_18 = 12190661055812500365ULL;
unsigned short var_19 = (unsigned short)41448;
unsigned long long int var_20 = 4773011239234939802ULL;
unsigned short var_21 = (unsigned short)47132;
unsigned char var_22 = (unsigned char)14;
int var_23 = -1532539857;
int var_24 = -56094275;
int var_25 = -1254293474;
unsigned short var_26 = (unsigned short)10635;
int var_27 = -1676769215;
unsigned short arr_0 [25] [25] ;
unsigned char arr_1 [25] ;
short arr_2 [25] [25] ;
unsigned int arr_4 [15] ;
int arr_5 [23] [23] ;
unsigned int arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)53494;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-31310;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2814271964U : 3450597126U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1215185549;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 734007326U : 1943093669U;
}

void checksum() {
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
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
