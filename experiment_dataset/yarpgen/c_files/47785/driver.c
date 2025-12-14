#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29479;
short var_1 = (short)4636;
short var_3 = (short)32252;
signed char var_4 = (signed char)55;
long long int var_5 = -4319193317974712248LL;
signed char var_6 = (signed char)51;
int var_8 = -475539477;
unsigned short var_9 = (unsigned short)28734;
unsigned short var_11 = (unsigned short)39670;
int zero = 0;
unsigned int var_12 = 363497553U;
short var_13 = (short)-8247;
long long int var_14 = -2512087033122623422LL;
signed char var_15 = (signed char)-123;
signed char var_16 = (signed char)104;
short var_17 = (short)-23372;
long long int arr_1 [24] [24] ;
_Bool arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 3329621421857482302LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
