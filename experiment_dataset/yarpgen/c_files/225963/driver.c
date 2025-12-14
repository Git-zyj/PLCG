#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29426;
signed char var_1 = (signed char)79;
unsigned long long int var_3 = 1229453618388664252ULL;
unsigned long long int var_6 = 282115344795886283ULL;
unsigned char var_7 = (unsigned char)222;
unsigned short var_8 = (unsigned short)17973;
unsigned long long int var_9 = 8748792877217576134ULL;
int zero = 0;
long long int var_10 = -175683039984523451LL;
unsigned char var_11 = (unsigned char)121;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 421342259U;
short var_15 = (short)-16171;
unsigned int arr_1 [19] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2453057373U : 1569404968U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)253 : (unsigned char)114;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
