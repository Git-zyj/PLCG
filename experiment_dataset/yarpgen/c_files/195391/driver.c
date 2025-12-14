#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1299687019863290137ULL;
unsigned char var_2 = (unsigned char)80;
long long int var_5 = 3581224687671426875LL;
long long int var_6 = 3761488557348226404LL;
short var_7 = (short)-8603;
unsigned long long int var_8 = 5236785293317378207ULL;
short var_9 = (short)16318;
int zero = 0;
unsigned short var_14 = (unsigned short)47236;
unsigned short var_15 = (unsigned short)38299;
short var_16 = (short)-4555;
short var_17 = (short)8760;
_Bool var_18 = (_Bool)0;
short var_19 = (short)11746;
unsigned long long int var_20 = 18172233454718469639ULL;
unsigned int var_21 = 778428807U;
unsigned char arr_0 [20] ;
short arr_1 [20] [20] ;
unsigned long long int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24818;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 3314188610350482948ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
