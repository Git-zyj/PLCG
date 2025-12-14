#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)1014;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15523688401044203729ULL;
unsigned long long int var_14 = 5628603336536512749ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 2887650054377600127ULL;
long long int var_20 = 8880830084534694930LL;
long long int var_21 = -7070117230564768270LL;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-24245;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
