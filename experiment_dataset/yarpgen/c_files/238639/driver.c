#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18594;
unsigned short var_6 = (unsigned short)57118;
int zero = 0;
unsigned long long int var_20 = 13674761167231721178ULL;
long long int var_21 = -2302542535044522817LL;
unsigned short var_22 = (unsigned short)19746;
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
