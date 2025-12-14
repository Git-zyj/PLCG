#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 320426632;
unsigned long long int var_3 = 2121634609420487809ULL;
unsigned int var_5 = 3771158560U;
unsigned long long int var_10 = 8753307213298248805ULL;
signed char var_13 = (signed char)-123;
int zero = 0;
signed char var_17 = (signed char)-15;
unsigned short var_18 = (unsigned short)65494;
_Bool var_19 = (_Bool)1;
unsigned short arr_0 [17] ;
unsigned long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)37155;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12592037264179506881ULL : 3222976508546232171ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
