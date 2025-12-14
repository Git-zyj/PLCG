#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)7;
long long int var_8 = -5604031324141898198LL;
unsigned short var_9 = (unsigned short)25992;
int zero = 0;
unsigned int var_11 = 1331462354U;
unsigned char var_12 = (unsigned char)113;
int var_13 = 1924011042;
int var_14 = 666320607;
int var_15 = -1772313290;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
