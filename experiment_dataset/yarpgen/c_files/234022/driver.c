#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65485;
unsigned long long int var_6 = 10663714017700974165ULL;
long long int var_10 = 3153546292866931615LL;
int zero = 0;
unsigned short var_19 = (unsigned short)25310;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9103833444474748331ULL;
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
