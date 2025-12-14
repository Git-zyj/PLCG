#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_6 = (signed char)-27;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 15828596272962188311ULL;
unsigned long long int var_15 = 16811992058280164650ULL;
signed char var_16 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
