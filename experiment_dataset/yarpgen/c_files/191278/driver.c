#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14575292142833366744ULL;
signed char var_4 = (signed char)19;
unsigned long long int var_9 = 8898801562289459539ULL;
unsigned long long int var_11 = 10747441483528646534ULL;
unsigned long long int var_13 = 15875901438064487132ULL;
int zero = 0;
signed char var_14 = (signed char)59;
unsigned long long int var_15 = 1841808996272961378ULL;
signed char var_16 = (signed char)112;
signed char var_17 = (signed char)79;
unsigned long long int var_18 = 7332290950749333176ULL;
signed char arr_0 [21] ;
unsigned long long int arr_2 [21] [21] ;
signed char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 6087450357740220974ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-86;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
