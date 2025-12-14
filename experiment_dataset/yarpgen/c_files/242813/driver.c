#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54917;
long long int var_1 = -1104574292950295383LL;
unsigned int var_3 = 2635863486U;
signed char var_4 = (signed char)-39;
int var_8 = 1806710216;
long long int var_9 = -7138385923881365190LL;
int zero = 0;
unsigned int var_11 = 2335347456U;
unsigned short var_12 = (unsigned short)18074;
long long int var_13 = 9028377207639881744LL;
unsigned long long int var_14 = 4272090541374187959ULL;
unsigned int var_15 = 882206200U;
unsigned short var_16 = (unsigned short)62843;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned long long int arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 518549671U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2398671706U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 16649548384622312911ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
