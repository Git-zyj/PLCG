#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -421304891;
unsigned long long int var_1 = 6874175293030301388ULL;
unsigned short var_3 = (unsigned short)37788;
int var_6 = -663363531;
signed char var_8 = (signed char)102;
long long int var_9 = 683218564270739851LL;
int zero = 0;
signed char var_10 = (signed char)-112;
signed char var_11 = (signed char)-3;
long long int var_12 = -1344137178907938994LL;
signed char var_13 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
