#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -647101040;
unsigned int var_17 = 2647676694U;
int zero = 0;
unsigned short var_19 = (unsigned short)55952;
unsigned int var_20 = 2855411131U;
unsigned long long int var_21 = 12702887187129669949ULL;
long long int var_22 = -7378007951374687381LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
