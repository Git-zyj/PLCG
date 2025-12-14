#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)22073;
unsigned int var_7 = 2420780406U;
long long int var_10 = -8764038568363633853LL;
int zero = 0;
unsigned char var_11 = (unsigned char)82;
unsigned int var_12 = 3971729541U;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)254;
unsigned char var_16 = (unsigned char)23;
int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 946520254;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
