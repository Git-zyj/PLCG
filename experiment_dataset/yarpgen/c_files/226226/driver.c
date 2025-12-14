#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_4 = 2106398855;
unsigned int var_8 = 3252668389U;
unsigned long long int var_10 = 2144009825584589767ULL;
signed char var_13 = (signed char)125;
int zero = 0;
short var_14 = (short)23253;
unsigned long long int var_15 = 18393728469709223083ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
