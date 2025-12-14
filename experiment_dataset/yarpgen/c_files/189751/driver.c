#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 456767784U;
unsigned int var_12 = 2978811456U;
signed char var_15 = (signed char)-63;
short var_17 = (short)-30156;
unsigned int var_18 = 4068438804U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1337864176U;
signed char var_21 = (signed char)-121;
unsigned char var_22 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
