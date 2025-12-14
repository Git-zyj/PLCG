#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -230271132740755253LL;
long long int var_7 = 1733914262881686061LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 3568109721723772171ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 1467146471U;
signed char var_18 = (signed char)53;
long long int var_19 = 567912197947947180LL;
short var_20 = (short)-27825;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
