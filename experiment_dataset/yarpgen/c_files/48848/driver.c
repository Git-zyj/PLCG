#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -132166318;
unsigned long long int var_2 = 4764345191504183937ULL;
unsigned long long int var_3 = 2711624364561635869ULL;
unsigned short var_6 = (unsigned short)65194;
long long int var_13 = -9045169482588342497LL;
int zero = 0;
unsigned short var_15 = (unsigned short)46728;
long long int var_16 = 5840013735866259152LL;
unsigned long long int var_17 = 17194722787151598182ULL;
short var_18 = (short)1171;
long long int var_19 = -2662797618275543938LL;
unsigned long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 8532638890919519175ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
