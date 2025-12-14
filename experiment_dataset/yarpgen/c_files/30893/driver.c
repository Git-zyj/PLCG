#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
signed char var_4 = (signed char)16;
signed char var_9 = (signed char)13;
unsigned int var_11 = 603342361U;
unsigned short var_14 = (unsigned short)63983;
signed char var_16 = (signed char)50;
unsigned char var_17 = (unsigned char)211;
int zero = 0;
unsigned long long int var_19 = 14841532903911699202ULL;
unsigned char var_20 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
