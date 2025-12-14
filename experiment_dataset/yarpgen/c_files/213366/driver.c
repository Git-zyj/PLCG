#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1760859671;
unsigned int var_5 = 1065750656U;
unsigned long long int var_9 = 2096186007939140929ULL;
long long int var_12 = -2634501292404411394LL;
signed char var_14 = (signed char)27;
int zero = 0;
unsigned long long int var_15 = 15191204383592935803ULL;
unsigned int var_16 = 619462640U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
