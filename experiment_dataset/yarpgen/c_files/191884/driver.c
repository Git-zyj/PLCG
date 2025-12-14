#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -970657239;
unsigned int var_5 = 2979405807U;
int zero = 0;
unsigned long long int var_18 = 18201114743942736311ULL;
int var_19 = -715921535;
unsigned short var_20 = (unsigned short)33812;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
