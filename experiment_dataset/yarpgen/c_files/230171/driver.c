#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5317520575914899522LL;
unsigned int var_1 = 1680256476U;
short var_2 = (short)-12958;
unsigned char var_3 = (unsigned char)22;
int var_10 = -1016284777;
int zero = 0;
unsigned char var_11 = (unsigned char)81;
long long int var_12 = 7931816171705270918LL;
short var_13 = (short)-19333;
void init() {
}

void checksum() {
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
