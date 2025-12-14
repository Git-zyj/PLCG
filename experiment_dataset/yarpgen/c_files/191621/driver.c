#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45907;
short var_2 = (short)9555;
int var_3 = 986445554;
unsigned short var_4 = (unsigned short)43696;
unsigned short var_5 = (unsigned short)62616;
unsigned int var_6 = 2665382440U;
unsigned int var_10 = 2741948468U;
int zero = 0;
signed char var_12 = (signed char)91;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
