#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5079480370858833400LL;
long long int var_3 = 8171068189099977140LL;
unsigned short var_4 = (unsigned short)33826;
long long int var_8 = 3829431079274987373LL;
long long int var_9 = 8267788348575283795LL;
int zero = 0;
unsigned short var_12 = (unsigned short)15368;
long long int var_13 = -3588077504650789569LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
