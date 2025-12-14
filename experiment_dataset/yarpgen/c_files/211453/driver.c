#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21996;
long long int var_3 = 6392482746811648842LL;
long long int var_7 = 1320122166158267051LL;
long long int var_11 = -3004711438675074220LL;
unsigned short var_12 = (unsigned short)29402;
long long int var_13 = -7841362887900715663LL;
unsigned int var_15 = 470253016U;
long long int var_17 = -3450069259276277525LL;
int zero = 0;
long long int var_18 = -3797754910953128853LL;
long long int var_19 = -3235184760155336932LL;
int var_20 = -190626124;
unsigned short var_21 = (unsigned short)22103;
_Bool arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
