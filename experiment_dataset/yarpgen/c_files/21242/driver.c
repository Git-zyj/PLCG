#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17877;
unsigned short var_4 = (unsigned short)43581;
long long int var_6 = -7825129200461207650LL;
long long int var_9 = -1977092344519609308LL;
int var_10 = -612270436;
int var_11 = 659604343;
int zero = 0;
short var_13 = (short)-18801;
long long int var_14 = 2267113242000989151LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
