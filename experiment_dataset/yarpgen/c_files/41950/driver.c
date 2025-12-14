#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-19;
int var_2 = -1604368704;
unsigned long long int var_3 = 4797451781093665558ULL;
signed char var_4 = (signed char)107;
signed char var_6 = (signed char)28;
unsigned int var_7 = 385286755U;
unsigned short var_12 = (unsigned short)10483;
int var_13 = -384715792;
int zero = 0;
unsigned int var_14 = 393929180U;
int var_15 = 103934204;
int var_16 = -352869384;
int var_17 = 811794219;
short arr_1 [25] ;
unsigned short arr_2 [25] ;
int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-25306;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)59059;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -2090080747;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
