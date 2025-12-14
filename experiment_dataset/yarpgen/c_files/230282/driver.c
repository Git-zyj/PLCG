#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7211243691653239288ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_15 = 887926087;
unsigned long long int var_16 = 3778496677805219475ULL;
signed char var_17 = (signed char)-117;
int var_18 = 346276246;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
