#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14474;
unsigned long long int var_2 = 4842861900498006650ULL;
unsigned char var_3 = (unsigned char)74;
unsigned char var_9 = (unsigned char)229;
unsigned char var_14 = (unsigned char)97;
int zero = 0;
signed char var_16 = (signed char)13;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)35;
void init() {
}

void checksum() {
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
