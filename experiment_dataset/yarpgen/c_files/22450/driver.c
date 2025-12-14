#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3090551784393888237ULL;
int var_2 = -836050138;
unsigned int var_3 = 1168477817U;
long long int var_4 = 5652546876745330941LL;
unsigned short var_5 = (unsigned short)45326;
long long int var_7 = 1702987460350285088LL;
unsigned short var_8 = (unsigned short)4040;
short var_9 = (short)-26925;
unsigned int var_10 = 61181611U;
unsigned long long int var_11 = 1663300450788893962ULL;
short var_12 = (short)10702;
int zero = 0;
signed char var_13 = (signed char)23;
int var_14 = 903811998;
unsigned long long int var_15 = 12164898919235358030ULL;
short var_16 = (short)-21195;
unsigned int var_17 = 4265767384U;
unsigned long long int arr_0 [17] [17] ;
_Bool arr_1 [17] [17] ;
unsigned long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 16881600842192745811ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 12040777089318004307ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
