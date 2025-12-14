#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5218734086076879303LL;
int var_1 = -27485752;
unsigned long long int var_2 = 6471758813055482322ULL;
long long int var_5 = 6803987563862391444LL;
_Bool var_7 = (_Bool)1;
short var_11 = (short)14162;
unsigned char var_12 = (unsigned char)125;
short var_17 = (short)-5909;
long long int var_19 = 9193517957197576966LL;
int zero = 0;
unsigned long long int var_20 = 11114629985625809488ULL;
long long int var_21 = -1547235557925272646LL;
short var_22 = (short)-15777;
signed char var_23 = (signed char)88;
long long int var_24 = -7023167229160267957LL;
unsigned long long int var_25 = 10194366373172607267ULL;
unsigned short arr_0 [23] ;
signed char arr_1 [23] [23] ;
int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)29248;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1812761797 : -648000323;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
