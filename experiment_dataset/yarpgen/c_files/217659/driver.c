#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15153;
unsigned long long int var_1 = 14083127573312982012ULL;
short var_2 = (short)-31441;
signed char var_7 = (signed char)45;
short var_8 = (short)-19213;
int var_9 = -83352969;
unsigned int var_10 = 2622784673U;
int var_12 = 1903153554;
unsigned long long int var_13 = 4131252350436596370ULL;
int zero = 0;
unsigned long long int var_14 = 4154583602718483386ULL;
long long int var_15 = -3104259413280441589LL;
unsigned short var_16 = (unsigned short)5344;
int var_17 = -91816694;
int arr_2 [23] ;
unsigned short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 401018362;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)6618;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
