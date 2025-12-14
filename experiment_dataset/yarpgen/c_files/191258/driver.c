#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6381014074948905769LL;
unsigned char var_1 = (unsigned char)46;
unsigned long long int var_3 = 1244735443690227069ULL;
int var_4 = -578489972;
int zero = 0;
unsigned long long int var_14 = 3518821549921652576ULL;
int var_15 = -103272115;
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
