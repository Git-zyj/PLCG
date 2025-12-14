#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2820444905881797987LL;
unsigned int var_1 = 56122433U;
unsigned char var_6 = (unsigned char)211;
int zero = 0;
unsigned int var_10 = 3951248675U;
short var_11 = (short)26655;
unsigned short var_12 = (unsigned short)63877;
unsigned long long int var_13 = 1262937157542818549ULL;
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
