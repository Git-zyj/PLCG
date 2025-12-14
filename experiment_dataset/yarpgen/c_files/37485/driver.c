#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)18051;
unsigned char var_7 = (unsigned char)61;
unsigned int var_8 = 2974324509U;
long long int var_9 = -1930244858437045705LL;
int zero = 0;
unsigned char var_15 = (unsigned char)78;
long long int var_16 = 1681567775158061554LL;
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
