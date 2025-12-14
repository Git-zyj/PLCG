#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -62483260;
unsigned short var_2 = (unsigned short)16486;
unsigned short var_4 = (unsigned short)56680;
long long int var_5 = 3004598492948440274LL;
signed char var_6 = (signed char)53;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-16306;
int zero = 0;
unsigned char var_10 = (unsigned char)224;
short var_11 = (short)10505;
signed char var_12 = (signed char)41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
