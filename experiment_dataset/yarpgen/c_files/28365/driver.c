#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6502014377513552786LL;
unsigned char var_6 = (unsigned char)125;
long long int var_8 = -7904290380054845195LL;
long long int var_9 = 1296077613270108750LL;
long long int var_10 = -5171781503283562670LL;
unsigned char var_14 = (unsigned char)241;
int zero = 0;
int var_16 = 861944600;
long long int var_17 = 5937544268928069617LL;
unsigned char var_18 = (unsigned char)66;
unsigned char var_19 = (unsigned char)234;
signed char var_20 = (signed char)-116;
unsigned short var_21 = (unsigned short)33539;
unsigned short var_22 = (unsigned short)2414;
long long int var_23 = -5449862005485109959LL;
int arr_4 [18] [18] ;
unsigned int arr_3 [11] ;
unsigned long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -543373329;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1114318244U : 3834480038U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 15442897510379161056ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
