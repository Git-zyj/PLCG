#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1753670252;
int var_6 = 1942066722;
unsigned int var_11 = 1626326186U;
signed char var_12 = (signed char)-109;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1081783028U;
int zero = 0;
short var_17 = (short)26626;
unsigned char var_18 = (unsigned char)211;
unsigned char var_19 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
