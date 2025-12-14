#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 839845011;
short var_9 = (short)6991;
unsigned int var_12 = 2024506059U;
int zero = 0;
unsigned short var_18 = (unsigned short)32286;
long long int var_19 = -3185598206326974005LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
