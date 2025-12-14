#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1657516237;
unsigned long long int var_7 = 13238625826608773903ULL;
unsigned short var_9 = (unsigned short)24903;
int zero = 0;
signed char var_17 = (signed char)25;
int var_18 = 1253094631;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
