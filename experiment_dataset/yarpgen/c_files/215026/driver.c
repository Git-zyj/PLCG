#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 827642004888837475LL;
short var_1 = (short)25322;
long long int var_3 = 2139738531790022769LL;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)205;
int var_9 = 1887078865;
unsigned char var_10 = (unsigned char)39;
int var_14 = -1542728824;
short var_15 = (short)-12637;
int zero = 0;
unsigned int var_18 = 610035893U;
signed char var_19 = (signed char)-93;
unsigned short var_20 = (unsigned short)60957;
unsigned int var_21 = 2091988768U;
long long int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -6000135694613854079LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
