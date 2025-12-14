#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
int var_4 = 1586965717;
unsigned char var_5 = (unsigned char)101;
short var_6 = (short)17299;
unsigned int var_10 = 2080505795U;
signed char var_11 = (signed char)97;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 3742855348U;
int var_16 = -1577822585;
unsigned short var_17 = (unsigned short)8;
int var_18 = -1425019730;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
