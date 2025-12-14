#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1919;
unsigned long long int var_1 = 5624403829405345869ULL;
int var_2 = -10138301;
long long int var_4 = -7321703604634645565LL;
unsigned char var_5 = (unsigned char)120;
unsigned long long int var_6 = 3307580021011014870ULL;
unsigned short var_7 = (unsigned short)9582;
unsigned long long int var_8 = 17573237358774997976ULL;
unsigned short var_9 = (unsigned short)30511;
int zero = 0;
unsigned int var_10 = 245832489U;
signed char var_11 = (signed char)-42;
unsigned int var_12 = 2779410488U;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
