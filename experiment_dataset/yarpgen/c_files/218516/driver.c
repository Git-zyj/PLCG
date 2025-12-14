#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1387281943U;
long long int var_3 = 7511614801713983324LL;
unsigned long long int var_4 = 10303701385803945926ULL;
unsigned char var_5 = (unsigned char)218;
int var_8 = -363220116;
int var_9 = -643068965;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3420352608666376138LL;
_Bool var_14 = (_Bool)0;
long long int var_16 = 6244946422227551683LL;
long long int var_17 = -7613188775693090550LL;
short var_19 = (short)-4210;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -2129333500;
_Bool var_22 = (_Bool)1;
long long int var_23 = -8171807228064055185LL;
unsigned int arr_3 [15] ;
unsigned int arr_4 [15] [15] ;
short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1684098724U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1347407556U : 773220131U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (short)10139 : (short)-9496;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
