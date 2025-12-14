#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -782186204;
unsigned char var_3 = (unsigned char)213;
long long int var_9 = 2117190258724120060LL;
long long int var_11 = 7477442497476390321LL;
long long int var_15 = 3202001330155006214LL;
unsigned long long int var_18 = 9195004518122628340ULL;
unsigned short var_19 = (unsigned short)4464;
int zero = 0;
long long int var_20 = 1574090521746616832LL;
unsigned int var_21 = 3001952592U;
long long int var_22 = 86714756830106579LL;
unsigned int var_23 = 2789402482U;
unsigned long long int var_24 = 17947166289114397440ULL;
signed char arr_5 [18] ;
unsigned long long int arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 15327588746954436107ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
