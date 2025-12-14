#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
short var_1 = (short)-22763;
long long int var_3 = -4809532490441880306LL;
short var_7 = (short)22116;
unsigned short var_8 = (unsigned short)49942;
unsigned short var_10 = (unsigned short)3766;
long long int var_13 = 383899291671315031LL;
int var_15 = 178722841;
long long int var_16 = 4808707890481237385LL;
signed char var_17 = (signed char)-103;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
unsigned long long int var_19 = 15318840780208946532ULL;
unsigned short var_20 = (unsigned short)29821;
signed char var_21 = (signed char)-2;
long long int var_22 = 3273435516143826533LL;
long long int var_23 = -5675759502359469066LL;
unsigned int var_24 = 2393015671U;
signed char var_25 = (signed char)-40;
unsigned long long int arr_0 [19] [19] ;
unsigned char arr_5 [12] ;
unsigned int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 5013560896369424893ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 200389102U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
