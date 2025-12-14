#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1037341235;
signed char var_2 = (signed char)-125;
signed char var_3 = (signed char)17;
long long int var_5 = -3273837337457494613LL;
unsigned int var_8 = 3729826246U;
int zero = 0;
long long int var_10 = -449761758753863201LL;
long long int var_11 = -4237836022632321952LL;
long long int var_12 = -7522479943861665412LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
