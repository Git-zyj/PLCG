#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)88;
long long int var_5 = 2888423498956773076LL;
unsigned int var_7 = 50265284U;
short var_8 = (short)-11354;
long long int var_9 = -4111195885636115929LL;
int zero = 0;
short var_13 = (short)4192;
unsigned long long int var_14 = 6512173986110117589ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3062449799061529442LL;
unsigned long long int var_17 = 11729537256818673906ULL;
signed char var_18 = (signed char)-17;
short var_19 = (short)-20184;
short arr_0 [19] ;
unsigned int arr_4 [23] ;
short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-16440;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 692455707U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)-27179;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
