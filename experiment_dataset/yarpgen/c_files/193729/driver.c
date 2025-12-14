#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9172924746719912664LL;
long long int var_14 = -8998771877542926939LL;
long long int var_19 = 837683373407006993LL;
int zero = 0;
unsigned long long int var_20 = 13909973755219539402ULL;
short var_21 = (short)-14058;
long long int var_22 = 6925890251079168858LL;
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
