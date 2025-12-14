#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16067;
short var_7 = (short)18882;
short var_8 = (short)-12762;
unsigned int var_9 = 2049472418U;
unsigned long long int var_10 = 18012431892151619090ULL;
unsigned int var_11 = 34473294U;
int var_12 = -1860537956;
unsigned short var_14 = (unsigned short)55365;
int var_17 = -328282089;
int zero = 0;
unsigned int var_19 = 3968315361U;
unsigned long long int var_20 = 4652891133774709768ULL;
signed char var_21 = (signed char)82;
unsigned short var_22 = (unsigned short)53741;
unsigned short var_23 = (unsigned short)58516;
short arr_1 [10] ;
int arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)29386;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -839502257;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
