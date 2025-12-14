#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9396;
unsigned int var_4 = 517569269U;
signed char var_8 = (signed char)30;
unsigned long long int var_9 = 5050405209462521000ULL;
unsigned char var_10 = (unsigned char)96;
signed char var_13 = (signed char)-86;
int zero = 0;
unsigned short var_14 = (unsigned short)61735;
int var_15 = -353555433;
unsigned long long int var_16 = 2268388431488524537ULL;
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
