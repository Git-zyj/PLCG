#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned int var_2 = 2245375444U;
int var_3 = -1064352692;
unsigned long long int var_9 = 5118607878795433415ULL;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)153;
long long int var_14 = -8252199541437505604LL;
unsigned int var_15 = 2062272462U;
short var_16 = (short)25050;
unsigned long long int var_19 = 2170304647890460320ULL;
int zero = 0;
unsigned int var_20 = 2307043099U;
short var_21 = (short)30306;
unsigned int var_22 = 1817273135U;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)20875;
short var_25 = (short)16476;
unsigned int var_26 = 1240008326U;
short arr_0 [10] ;
long long int arr_1 [10] ;
long long int arr_2 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-20283;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -2580181259383969318LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -4550456593867512340LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
