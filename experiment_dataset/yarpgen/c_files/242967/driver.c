#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
signed char var_2 = (signed char)71;
unsigned int var_5 = 3081801005U;
unsigned short var_6 = (unsigned short)42720;
unsigned long long int var_7 = 8088526684557775525ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 16954716879604251774ULL;
short var_11 = (short)-22492;
int zero = 0;
unsigned char var_12 = (unsigned char)22;
unsigned int var_13 = 2666240821U;
short var_14 = (short)5204;
unsigned char var_15 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
