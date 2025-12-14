#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6764594174054752663ULL;
int var_3 = 321287745;
long long int var_4 = 6907631656786487931LL;
signed char var_5 = (signed char)127;
signed char var_9 = (signed char)94;
unsigned short var_13 = (unsigned short)44814;
int zero = 0;
unsigned char var_17 = (unsigned char)225;
signed char var_18 = (signed char)116;
int var_19 = 98598051;
unsigned long long int arr_3 [21] ;
unsigned short arr_4 [21] [21] ;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 10441960195428225943ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)967;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11842 : (unsigned short)53140;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
