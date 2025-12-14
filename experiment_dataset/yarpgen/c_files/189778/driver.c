#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 110332408U;
unsigned int var_3 = 2660021064U;
signed char var_4 = (signed char)-40;
unsigned int var_9 = 2345631012U;
int var_13 = -69047285;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = -1171536080;
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
