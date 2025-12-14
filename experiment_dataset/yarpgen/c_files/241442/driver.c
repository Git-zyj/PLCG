#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4129134929U;
short var_2 = (short)15839;
unsigned int var_3 = 1970491900U;
unsigned long long int var_4 = 8457984150800035594ULL;
short var_5 = (short)-22961;
signed char var_6 = (signed char)8;
signed char var_7 = (signed char)22;
unsigned short var_9 = (unsigned short)27560;
int zero = 0;
unsigned char var_10 = (unsigned char)190;
_Bool var_11 = (_Bool)0;
int var_12 = 1234663566;
unsigned char var_13 = (unsigned char)144;
unsigned char var_14 = (unsigned char)97;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
