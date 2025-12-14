#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
unsigned int var_3 = 2853777796U;
long long int var_7 = -6628714245981565475LL;
unsigned char var_8 = (unsigned char)152;
unsigned long long int var_9 = 8692025705123825499ULL;
int zero = 0;
unsigned long long int var_15 = 7680359948639258034ULL;
unsigned int var_16 = 2026869974U;
_Bool var_17 = (_Bool)1;
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
