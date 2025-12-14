#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned short var_1 = (unsigned short)42713;
unsigned char var_2 = (unsigned char)35;
unsigned int var_3 = 1120209127U;
_Bool var_4 = (_Bool)1;
int var_5 = 1890359205;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-85;
int var_8 = -1508177583;
_Bool var_9 = (_Bool)0;
long long int var_10 = -9205528651200371511LL;
unsigned int var_11 = 3524869097U;
unsigned long long int var_12 = 610272728458573042ULL;
int zero = 0;
int var_13 = -285233691;
unsigned int var_14 = 1901850765U;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3014692906U;
short arr_0 [11] [11] ;
int arr_1 [11] ;
signed char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-7715;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1855268521;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-89;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
