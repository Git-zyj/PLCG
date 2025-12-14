#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1161650643;
unsigned long long int var_7 = 14894033158693407432ULL;
unsigned long long int var_8 = 16342186949340083965ULL;
unsigned short var_14 = (unsigned short)56091;
int zero = 0;
long long int var_15 = -8155643618908169857LL;
unsigned int var_16 = 1023398738U;
unsigned long long int var_17 = 15039812160204453836ULL;
unsigned long long int arr_0 [12] ;
short arr_1 [12] [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1880680928054035032ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)28502;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1377000988;
}

void checksum() {
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
