#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3794153960493332154LL;
signed char var_6 = (signed char)1;
long long int var_7 = -2618427244425177552LL;
long long int var_9 = -3002317002474188257LL;
unsigned int var_14 = 3753307934U;
int zero = 0;
int var_15 = -1506887727;
short var_16 = (short)21865;
unsigned char var_17 = (unsigned char)132;
unsigned long long int var_18 = 15948916977219009136ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
