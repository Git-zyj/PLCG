#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3478234973U;
unsigned char var_16 = (unsigned char)152;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 1501265999479227403ULL;
unsigned int var_21 = 3741789492U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
