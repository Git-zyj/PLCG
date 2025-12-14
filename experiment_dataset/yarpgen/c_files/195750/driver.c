#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6861615861139658727LL;
unsigned long long int var_2 = 2439526760352748191ULL;
unsigned int var_5 = 662212828U;
unsigned int var_7 = 2704650483U;
unsigned char var_10 = (unsigned char)162;
unsigned short var_11 = (unsigned short)15792;
signed char var_13 = (signed char)-45;
int zero = 0;
short var_15 = (short)-6994;
int var_16 = 1617611072;
unsigned long long int var_17 = 7061714077084056601ULL;
unsigned int var_18 = 3506032899U;
long long int arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
short arr_2 [16] ;
unsigned short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5995761226299964087LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 17359640038223030260ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)22203;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)8279;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
