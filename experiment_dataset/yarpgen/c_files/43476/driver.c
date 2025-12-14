#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8711685717755037595LL;
unsigned long long int var_2 = 10416653524602348473ULL;
long long int var_5 = -6446642929826674959LL;
long long int var_7 = -4136767963905506007LL;
unsigned short var_9 = (unsigned short)21826;
unsigned int var_10 = 4085185825U;
int zero = 0;
long long int var_15 = -3736855834463490331LL;
unsigned short var_16 = (unsigned short)42004;
unsigned int var_17 = 1711164169U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
