#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -451511948;
unsigned short var_5 = (unsigned short)20029;
long long int var_9 = -7865968552036466326LL;
int zero = 0;
signed char var_12 = (signed char)-82;
int var_13 = -361709615;
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
