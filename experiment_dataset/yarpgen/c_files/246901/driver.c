#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 17915674576396324260ULL;
unsigned short var_10 = (unsigned short)20300;
short var_11 = (short)-17944;
short var_14 = (short)6146;
unsigned short var_15 = (unsigned short)49458;
int zero = 0;
int var_16 = 1044853746;
long long int var_17 = -8549064900844360775LL;
short var_18 = (short)-18608;
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
