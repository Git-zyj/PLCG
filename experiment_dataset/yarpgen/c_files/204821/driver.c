#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1253522425127070826ULL;
unsigned int var_3 = 2473557055U;
signed char var_5 = (signed char)82;
int var_10 = 477116108;
int var_11 = -435811877;
long long int var_12 = -1890218021220192568LL;
unsigned int var_13 = 3941399955U;
int zero = 0;
signed char var_15 = (signed char)-41;
unsigned long long int var_16 = 16600107445743712438ULL;
unsigned int var_17 = 3320061316U;
unsigned int var_18 = 2629413505U;
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
