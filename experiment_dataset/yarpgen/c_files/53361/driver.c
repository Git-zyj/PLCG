#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
long long int var_6 = 618112364912381508LL;
short var_9 = (short)-9950;
int var_10 = 1844405387;
signed char var_14 = (signed char)-32;
int var_16 = -954184069;
int zero = 0;
unsigned long long int var_17 = 14994626057398535229ULL;
unsigned long long int var_18 = 11010143459904976008ULL;
short var_19 = (short)10970;
unsigned long long int var_20 = 15230242575242561446ULL;
short var_21 = (short)24621;
unsigned short var_22 = (unsigned short)43932;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -6173416860834353990LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
