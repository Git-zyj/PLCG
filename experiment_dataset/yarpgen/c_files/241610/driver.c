#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)131;
int var_2 = 541365267;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 4948969819896978174ULL;
unsigned short var_5 = (unsigned short)32120;
int var_6 = -336637763;
unsigned short var_7 = (unsigned short)61854;
unsigned int var_8 = 3275220239U;
unsigned int var_9 = 4275073897U;
int zero = 0;
short var_10 = (short)-31220;
long long int var_11 = -4850424688450580550LL;
unsigned long long int var_12 = 12678743271243915219ULL;
signed char var_13 = (signed char)42;
long long int var_14 = 1504677224414898658LL;
unsigned short var_15 = (unsigned short)59291;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
signed char arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)46;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
