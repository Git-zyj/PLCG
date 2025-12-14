#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7867471523358432500LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10200994268444864657ULL;
int zero = 0;
long long int var_18 = 3894841726075924520LL;
short var_19 = (short)10215;
unsigned short var_20 = (unsigned short)28932;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
