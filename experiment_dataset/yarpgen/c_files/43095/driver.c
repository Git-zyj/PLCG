#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2114029684778686741ULL;
short var_2 = (short)-20198;
unsigned short var_3 = (unsigned short)29932;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 11050031781680583104ULL;
unsigned char var_9 = (unsigned char)68;
int var_10 = -849146316;
int zero = 0;
unsigned short var_11 = (unsigned short)61077;
signed char var_12 = (signed char)-77;
_Bool var_13 = (_Bool)1;
int var_14 = -343575254;
signed char arr_0 [16] ;
int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
long long int arr_4 [16] ;
unsigned short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -964651980;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1059043246667419606ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3146682690648604406LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)14503;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
