#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13561;
_Bool var_5 = (_Bool)1;
int var_7 = -1987214008;
long long int var_8 = 6466989195993771795LL;
int zero = 0;
unsigned long long int var_11 = 4274217541266131267ULL;
unsigned long long int var_12 = 9816144134775175750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
