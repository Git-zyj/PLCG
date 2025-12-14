#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 926322839U;
unsigned short var_4 = (unsigned short)34051;
unsigned char var_8 = (unsigned char)241;
unsigned int var_12 = 2595090330U;
signed char var_15 = (signed char)30;
short var_16 = (short)-28188;
int var_17 = 1744750507;
unsigned short var_18 = (unsigned short)30655;
signed char var_19 = (signed char)46;
int zero = 0;
unsigned int var_20 = 3009052025U;
unsigned long long int var_21 = 10830335665065408071ULL;
unsigned int var_22 = 1794765605U;
unsigned int var_23 = 1423706800U;
unsigned int var_24 = 3664381144U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
