#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18172;
unsigned short var_5 = (unsigned short)53736;
unsigned char var_8 = (unsigned char)83;
unsigned long long int var_9 = 9141252195490235227ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)205;
unsigned long long int var_13 = 7050994738829204262ULL;
unsigned long long int var_14 = 12519045405358877713ULL;
void init() {
}

void checksum() {
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
