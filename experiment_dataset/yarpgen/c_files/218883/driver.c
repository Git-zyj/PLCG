#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
signed char var_14 = (signed char)-125;
signed char var_15 = (signed char)-109;
signed char var_16 = (signed char)116;
signed char var_17 = (signed char)102;
int zero = 0;
signed char var_20 = (signed char)9;
signed char var_21 = (signed char)-31;
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
