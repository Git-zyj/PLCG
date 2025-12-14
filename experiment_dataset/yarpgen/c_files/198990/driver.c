#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned long long int var_3 = 974124507135258302ULL;
unsigned long long int var_4 = 1402373825404397392ULL;
unsigned long long int var_7 = 3521788417333526410ULL;
short var_13 = (short)9419;
short var_15 = (short)13186;
unsigned char var_17 = (unsigned char)3;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 237412075U;
long long int var_20 = -1952376246932813334LL;
unsigned int var_21 = 1956697025U;
unsigned long long int var_22 = 6132811943855800392ULL;
unsigned char var_23 = (unsigned char)2;
unsigned char var_24 = (unsigned char)125;
unsigned int var_25 = 774885516U;
_Bool arr_2 [23] [23] ;
unsigned char arr_5 [23] [23] ;
short arr_6 [23] [23] ;
unsigned short arr_7 [23] [23] [23] ;
short arr_9 [23] [23] ;
unsigned long long int arr_10 [23] ;
_Bool arr_11 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-22495;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)1445 : (unsigned short)15820;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-5505;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 17272437322009555767ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
