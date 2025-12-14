#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
long long int var_4 = -7828497170132348017LL;
long long int var_8 = -5526736343289707543LL;
unsigned char var_9 = (unsigned char)44;
signed char var_11 = (signed char)-116;
long long int var_12 = 1102731216001771668LL;
int zero = 0;
signed char var_14 = (signed char)-81;
long long int var_15 = 1029598632706726249LL;
signed char var_16 = (signed char)-38;
unsigned char var_17 = (unsigned char)21;
signed char arr_0 [25] ;
signed char arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)47;
}

void checksum() {
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
