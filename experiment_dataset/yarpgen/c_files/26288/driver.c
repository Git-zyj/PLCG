#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13372;
int var_1 = -1917798269;
unsigned long long int var_2 = 18024072882818862687ULL;
int var_5 = 1577924509;
unsigned int var_7 = 1492352685U;
unsigned char var_9 = (unsigned char)15;
unsigned long long int var_10 = 11307669946030063519ULL;
unsigned short var_12 = (unsigned short)54159;
short var_15 = (short)-4854;
unsigned int var_16 = 2131093702U;
unsigned long long int var_17 = 14461018647765272547ULL;
short var_18 = (short)18022;
int zero = 0;
long long int var_20 = -1241620105231047576LL;
short var_21 = (short)23427;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 971390041U;
int var_24 = -1919237845;
_Bool arr_2 [14] [14] [14] ;
unsigned long long int arr_10 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 11226194224282586796ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
