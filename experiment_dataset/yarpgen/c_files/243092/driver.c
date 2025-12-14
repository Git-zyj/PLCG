#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10032353324115812050ULL;
unsigned int var_1 = 1120054176U;
int var_10 = 1887752906;
unsigned char var_11 = (unsigned char)251;
unsigned char var_12 = (unsigned char)161;
short var_13 = (short)5328;
int zero = 0;
signed char var_16 = (signed char)113;
short var_17 = (short)5078;
int var_18 = -1665206981;
int var_19 = -1363597245;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_2 [22] ;
unsigned char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 17638455428915209316ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
