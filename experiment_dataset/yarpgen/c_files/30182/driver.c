#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned long long int var_1 = 8113069756798946565ULL;
int var_3 = -162623284;
unsigned long long int var_8 = 8277549945626796119ULL;
long long int var_9 = 2639678110855008534LL;
unsigned long long int var_10 = 7334115365368161313ULL;
short var_11 = (short)7540;
int zero = 0;
int var_12 = -1576603758;
int var_13 = -734671011;
short var_14 = (short)-25823;
unsigned short var_15 = (unsigned short)23277;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
