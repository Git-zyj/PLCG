#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13079;
int var_3 = 327166179;
short var_11 = (short)757;
int zero = 0;
unsigned char var_15 = (unsigned char)184;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5459427651928743672ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
