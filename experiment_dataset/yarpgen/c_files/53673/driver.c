#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 912856182U;
signed char var_7 = (signed char)44;
unsigned char var_8 = (unsigned char)154;
unsigned char var_9 = (unsigned char)223;
int zero = 0;
int var_11 = -1959505949;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-9961;
int var_14 = 1057353865;
void init() {
}

void checksum() {
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
