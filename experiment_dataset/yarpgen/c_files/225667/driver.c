#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)207;
unsigned int var_9 = 22416685U;
unsigned char var_10 = (unsigned char)223;
unsigned long long int var_12 = 1079712449308028346ULL;
unsigned int var_13 = 3232389557U;
int var_14 = -663015737;
int zero = 0;
short var_15 = (short)-12662;
signed char var_16 = (signed char)52;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2373308660U;
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
