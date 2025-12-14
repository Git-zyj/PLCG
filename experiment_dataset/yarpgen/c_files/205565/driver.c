#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)42;
unsigned int var_14 = 352468852U;
unsigned long long int var_16 = 9578024617674894018ULL;
int zero = 0;
signed char var_18 = (signed char)-55;
signed char var_19 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
