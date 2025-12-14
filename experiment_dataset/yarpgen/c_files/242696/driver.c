#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3954760025506180945LL;
short var_9 = (short)17162;
int var_15 = 1126992504;
unsigned char var_18 = (unsigned char)64;
int zero = 0;
long long int var_19 = -4108230366727793055LL;
unsigned int var_20 = 1723292188U;
long long int var_21 = -2551075528036415334LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
