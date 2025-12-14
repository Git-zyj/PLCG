#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4561593935353079356ULL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3940343552U;
unsigned short var_17 = (unsigned short)49219;
int zero = 0;
short var_18 = (short)-16116;
int var_19 = -260850722;
short var_20 = (short)-14318;
int var_21 = 445195932;
unsigned long long int var_22 = 3777080392316286769ULL;
unsigned int var_23 = 1433485770U;
unsigned long long int var_24 = 5848775970833311125ULL;
unsigned short arr_0 [18] [18] ;
unsigned long long int arr_2 [18] [18] ;
unsigned long long int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)32156;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 17103843140437733755ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 697171422771447083ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
