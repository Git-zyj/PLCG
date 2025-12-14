#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58488;
unsigned short var_4 = (unsigned short)37568;
unsigned long long int var_5 = 8911773557216501078ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)32;
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
