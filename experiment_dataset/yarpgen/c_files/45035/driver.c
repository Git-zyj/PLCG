#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)26593;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)47;
unsigned long long int var_13 = 16365723069502585208ULL;
int zero = 0;
signed char var_14 = (signed char)33;
unsigned short var_15 = (unsigned short)8908;
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
