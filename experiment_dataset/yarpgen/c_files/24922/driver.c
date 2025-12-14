#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48473;
unsigned char var_2 = (unsigned char)191;
unsigned long long int var_6 = 11160880561117729089ULL;
unsigned int var_9 = 3340350847U;
unsigned long long int var_12 = 16207800147421652555ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)116;
unsigned short var_14 = (unsigned short)60842;
unsigned char var_15 = (unsigned char)228;
signed char var_16 = (signed char)-120;
long long int var_17 = 5833758212995972037LL;
unsigned short arr_3 [25] [25] ;
unsigned short arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)53361;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)15895;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
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
