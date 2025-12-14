#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 3918625996187838767LL;
unsigned short var_17 = (unsigned short)35829;
signed char var_19 = (signed char)-79;
int zero = 0;
signed char var_20 = (signed char)-121;
unsigned long long int var_21 = 7555784170049684152ULL;
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
