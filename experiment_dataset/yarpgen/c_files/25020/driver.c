#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5896509633996536219LL;
signed char var_6 = (signed char)-92;
long long int var_7 = -1613455684384933178LL;
int var_8 = -1375307230;
unsigned long long int var_10 = 14026668691447518634ULL;
unsigned long long int var_16 = 6530244365627217151ULL;
int zero = 0;
int var_17 = 2142062647;
int var_18 = -447014486;
unsigned long long int var_19 = 3045692954183020981ULL;
int var_20 = -1280248555;
int arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1967586912 : -1832461978;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
