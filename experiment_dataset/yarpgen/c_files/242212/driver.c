#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1965276842;
int var_3 = -273830542;
unsigned int var_5 = 3941021251U;
unsigned char var_9 = (unsigned char)52;
unsigned char var_10 = (unsigned char)148;
short var_11 = (short)20410;
int zero = 0;
long long int var_13 = 34336498214822222LL;
signed char var_14 = (signed char)16;
void init() {
}

void checksum() {
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
