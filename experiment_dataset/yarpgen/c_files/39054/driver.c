#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11642;
int var_4 = -1117043191;
long long int var_12 = -9204288008223375736LL;
signed char var_15 = (signed char)80;
int zero = 0;
unsigned int var_20 = 840298502U;
unsigned char var_21 = (unsigned char)221;
unsigned int var_22 = 2108071759U;
signed char var_23 = (signed char)42;
unsigned long long int var_24 = 12037112265031316914ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
