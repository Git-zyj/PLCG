#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)7581;
unsigned short var_6 = (unsigned short)9355;
unsigned char var_8 = (unsigned char)51;
unsigned int var_9 = 3099681990U;
unsigned int var_10 = 1365339272U;
int var_13 = -203855725;
long long int var_14 = 3092252051600865373LL;
int zero = 0;
unsigned int var_18 = 1203696764U;
short var_19 = (short)-25165;
int var_20 = 2009347850;
unsigned short arr_1 [23] ;
long long int arr_3 [23] ;
long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)13935;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6277052143484324808LL : -1820149325222976508LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5001863732929831859LL : 9174588204597433127LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
