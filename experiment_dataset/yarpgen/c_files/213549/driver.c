#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4983;
int var_2 = -70546268;
signed char var_4 = (signed char)-81;
unsigned long long int var_9 = 2414146533888176626ULL;
int var_12 = -1453117586;
int zero = 0;
long long int var_14 = -2365850658798747148LL;
unsigned int var_15 = 1523225745U;
unsigned char var_16 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
