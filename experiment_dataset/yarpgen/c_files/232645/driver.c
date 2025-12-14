#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-55;
short var_6 = (short)25341;
unsigned long long int var_8 = 10867785169868893557ULL;
int var_10 = -19308525;
int zero = 0;
int var_11 = 20061118;
int var_12 = 1491127542;
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
