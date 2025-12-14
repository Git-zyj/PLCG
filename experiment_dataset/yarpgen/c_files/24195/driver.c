#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)172;
int var_4 = -299168264;
signed char var_8 = (signed char)-63;
unsigned char var_9 = (unsigned char)87;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-8592;
unsigned int var_12 = 2825701356U;
signed char var_13 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
