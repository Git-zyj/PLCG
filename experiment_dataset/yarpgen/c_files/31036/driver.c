#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -429568574;
int var_2 = 773761843;
int var_3 = -1160236758;
signed char var_4 = (signed char)52;
unsigned int var_5 = 2087455438U;
unsigned long long int var_6 = 3107649551542263181ULL;
unsigned int var_8 = 1538268419U;
unsigned char var_9 = (unsigned char)88;
int zero = 0;
unsigned char var_10 = (unsigned char)84;
unsigned char var_11 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
