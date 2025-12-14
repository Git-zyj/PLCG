#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-26164;
signed char var_8 = (signed char)15;
signed char var_12 = (signed char)-25;
int zero = 0;
unsigned int var_14 = 2967633117U;
long long int var_15 = 1012925112520297913LL;
long long int var_16 = 8836857442705222219LL;
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
