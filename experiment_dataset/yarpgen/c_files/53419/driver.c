#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2512421033U;
unsigned long long int var_6 = 16772507812476240488ULL;
long long int var_13 = -8480947107329817434LL;
int zero = 0;
unsigned char var_16 = (unsigned char)17;
unsigned int var_17 = 3428093934U;
int var_18 = 525403193;
short var_19 = (short)28872;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
