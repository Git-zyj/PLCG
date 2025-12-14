#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
short var_5 = (short)26176;
unsigned char var_6 = (unsigned char)87;
long long int var_8 = -3125825110336131281LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 8776052258903217980LL;
unsigned int var_12 = 3635528311U;
unsigned int var_13 = 1093689734U;
int zero = 0;
signed char var_15 = (signed char)110;
unsigned int var_16 = 1743668390U;
short var_17 = (short)-26935;
unsigned short var_18 = (unsigned short)41775;
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
