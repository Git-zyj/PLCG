#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6931493258546774967LL;
unsigned char var_1 = (unsigned char)60;
long long int var_3 = 8576689079573862199LL;
long long int var_4 = 3490792918197096310LL;
unsigned long long int var_5 = 15512386188949684878ULL;
unsigned char var_8 = (unsigned char)170;
long long int var_9 = -4727434627997377693LL;
long long int var_10 = 7539215931453358321LL;
int zero = 0;
int var_11 = 1277155100;
int var_12 = 2068116989;
unsigned char var_13 = (unsigned char)88;
unsigned long long int var_14 = 8697561211550589614ULL;
unsigned long long int var_15 = 16193321938664054006ULL;
unsigned char var_16 = (unsigned char)80;
unsigned char arr_1 [22] [22] ;
_Bool arr_3 [22] ;
int arr_5 [22] [22] ;
_Bool arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = -1703625162;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
