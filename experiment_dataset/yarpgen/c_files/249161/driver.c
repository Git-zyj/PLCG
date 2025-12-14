#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned char var_5 = (unsigned char)12;
unsigned char var_6 = (unsigned char)91;
unsigned long long int var_9 = 12776294517360912329ULL;
short var_10 = (short)13380;
int zero = 0;
signed char var_12 = (signed char)116;
unsigned long long int var_13 = 16576098333832013639ULL;
void init() {
}

void checksum() {
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
