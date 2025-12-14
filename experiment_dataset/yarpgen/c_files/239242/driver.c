#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1864962007U;
long long int var_13 = 4962683056438551789LL;
signed char var_16 = (signed char)81;
unsigned long long int var_17 = 7049954735554284760ULL;
int zero = 0;
int var_20 = 374249607;
unsigned long long int var_21 = 6314252748727389437ULL;
unsigned char var_22 = (unsigned char)3;
unsigned char var_23 = (unsigned char)118;
short var_24 = (short)-23103;
_Bool var_25 = (_Bool)0;
long long int var_26 = -6265961993137966516LL;
signed char arr_0 [15] ;
_Bool arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
