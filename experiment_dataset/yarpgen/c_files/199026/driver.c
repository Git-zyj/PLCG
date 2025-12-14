#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)208;
unsigned char var_1 = (unsigned char)164;
long long int var_6 = 3157776316548304547LL;
unsigned long long int var_8 = 7574487564823826271ULL;
short var_10 = (short)-12149;
unsigned int var_14 = 2384354234U;
long long int var_15 = -6729685588755346119LL;
long long int var_16 = -2218583670257250187LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2995713953U;
unsigned long long int var_22 = 5064710169682817061ULL;
long long int var_23 = 4651974159868707938LL;
signed char var_24 = (signed char)111;
long long int arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -625478909488834655LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
