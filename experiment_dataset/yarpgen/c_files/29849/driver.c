#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)116;
short var_2 = (short)29486;
unsigned short var_9 = (unsigned short)1479;
signed char var_10 = (signed char)92;
unsigned int var_15 = 749480662U;
int zero = 0;
unsigned long long int var_19 = 16007883182846244624ULL;
unsigned short var_20 = (unsigned short)14982;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
