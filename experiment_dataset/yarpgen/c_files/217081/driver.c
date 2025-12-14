#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15773990024341483973ULL;
signed char var_5 = (signed char)-12;
unsigned long long int var_12 = 2504628462046289269ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)1458;
long long int var_14 = -6897707104762315417LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
