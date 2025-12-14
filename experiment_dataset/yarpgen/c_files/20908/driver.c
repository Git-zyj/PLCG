#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)96;
int var_5 = -148261513;
long long int var_7 = -7286558668723025255LL;
unsigned char var_13 = (unsigned char)36;
int zero = 0;
signed char var_16 = (signed char)-98;
unsigned char var_17 = (unsigned char)25;
int var_18 = 1929629530;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
