#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20961;
unsigned int var_2 = 165701999U;
unsigned short var_5 = (unsigned short)48631;
long long int var_9 = 3386009604414403156LL;
long long int var_10 = 8724894218246315815LL;
int var_13 = 1612130585;
int zero = 0;
unsigned long long int var_20 = 10056069395373516624ULL;
int var_21 = 1666705906;
signed char var_22 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
