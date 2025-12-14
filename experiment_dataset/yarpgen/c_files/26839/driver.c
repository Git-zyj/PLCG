#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1031660295;
unsigned int var_9 = 2063198043U;
int var_14 = -1390500454;
signed char var_16 = (signed char)-27;
int zero = 0;
unsigned int var_17 = 171171675U;
long long int var_18 = 7421515325930550984LL;
long long int var_19 = -4456118630186693154LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
