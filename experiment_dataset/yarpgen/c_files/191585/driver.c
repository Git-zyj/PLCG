#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2034750226U;
unsigned int var_4 = 1268131277U;
_Bool var_6 = (_Bool)0;
int var_7 = 790481766;
int var_9 = -236588466;
int var_11 = 549609709;
unsigned short var_13 = (unsigned short)56369;
unsigned short var_14 = (unsigned short)57737;
unsigned long long int var_15 = 14959062833113355537ULL;
int zero = 0;
int var_17 = 746969500;
unsigned short var_18 = (unsigned short)65146;
int var_19 = 1610254370;
unsigned int var_20 = 1685000817U;
short var_21 = (short)8536;
unsigned int arr_4 [13] [13] ;
unsigned long long int arr_5 [13] [13] ;
unsigned long long int arr_6 [13] ;
unsigned int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1542023882U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 8668013906400057049ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3339637529558161825ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 3347221381U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
