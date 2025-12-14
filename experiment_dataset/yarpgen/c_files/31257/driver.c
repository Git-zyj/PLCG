#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8029431503053659958LL;
signed char var_7 = (signed char)-102;
signed char var_12 = (signed char)1;
int zero = 0;
short var_16 = (short)15889;
short var_17 = (short)-31497;
unsigned long long int var_18 = 7266840755735201714ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
