#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
unsigned int var_1 = 614391642U;
int var_3 = -2133508596;
unsigned long long int var_9 = 11232755349589817915ULL;
long long int var_10 = -5596042125238539367LL;
long long int var_12 = -7512590365717388184LL;
unsigned int var_13 = 4230140332U;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 2503235986U;
int var_17 = 1656596406;
unsigned long long int var_18 = 12489111089182154719ULL;
short var_19 = (short)20568;
short var_20 = (short)-29971;
int arr_0 [13] ;
int arr_1 [13] [13] ;
long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -187092585;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -731154228;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -2835045980677673676LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
