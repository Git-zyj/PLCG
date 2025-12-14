#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29001;
int var_1 = -1038113743;
unsigned char var_2 = (unsigned char)124;
unsigned long long int var_4 = 15571013414184671115ULL;
unsigned char var_6 = (unsigned char)158;
signed char var_9 = (signed char)101;
int zero = 0;
unsigned char var_11 = (unsigned char)171;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 49823394U;
signed char var_14 = (signed char)59;
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
