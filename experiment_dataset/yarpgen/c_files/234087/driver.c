#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -976869153046181973LL;
signed char var_2 = (signed char)-88;
int var_5 = -73549030;
long long int var_7 = -4168646804512686464LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)127;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-16523;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3655083639657440438LL;
short var_20 = (short)-15198;
signed char arr_3 [12] ;
short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (short)24410;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
