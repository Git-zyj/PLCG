#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8440163401190398985LL;
unsigned int var_7 = 1423410978U;
long long int var_8 = 5308358363729579662LL;
unsigned long long int var_12 = 15135067820831371025ULL;
int zero = 0;
unsigned int var_16 = 2607179020U;
long long int var_17 = 2327115471492124184LL;
short var_18 = (short)-10182;
void init() {
}

void checksum() {
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
