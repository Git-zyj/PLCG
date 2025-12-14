#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6588471946022728988LL;
long long int var_5 = 9007574546669956427LL;
unsigned int var_6 = 1751393103U;
unsigned int var_9 = 2143869918U;
signed char var_13 = (signed char)-27;
short var_14 = (short)-12166;
unsigned long long int var_15 = 15223952626463532499ULL;
short var_16 = (short)26880;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 113071412;
unsigned int var_21 = 1272297560U;
unsigned short var_22 = (unsigned short)42427;
short var_23 = (short)-7511;
_Bool var_24 = (_Bool)0;
long long int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 8263730546294085990LL : -6927511474244130165LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
