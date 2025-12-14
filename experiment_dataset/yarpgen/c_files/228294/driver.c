#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26129;
signed char var_4 = (signed char)-41;
signed char var_5 = (signed char)-69;
int var_8 = -877782758;
unsigned long long int var_11 = 4275138922938557761ULL;
int zero = 0;
signed char var_13 = (signed char)-55;
unsigned long long int var_14 = 5596472939549978585ULL;
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
