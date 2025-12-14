#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -488139517946686318LL;
unsigned int var_3 = 572475185U;
short var_4 = (short)26603;
long long int var_5 = -4062600571298635898LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)59169;
unsigned long long int var_9 = 12229304229124984353ULL;
unsigned short var_10 = (unsigned short)19661;
_Bool var_11 = (_Bool)1;
int var_12 = -106181531;
signed char var_13 = (signed char)103;
long long int var_14 = -5592569894037693945LL;
unsigned long long int var_15 = 16351302615311325505ULL;
unsigned long long int var_16 = 11454071252400030511ULL;
int zero = 0;
unsigned int var_17 = 2764273643U;
long long int var_18 = -6259871732430442223LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2360561092655776446LL;
unsigned short var_21 = (unsigned short)21681;
unsigned int var_22 = 3032235645U;
unsigned short var_23 = (unsigned short)2994;
long long int var_24 = 4967254443971726800LL;
signed char arr_1 [19] ;
int arr_4 [19] ;
unsigned char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2085342336;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)77;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
