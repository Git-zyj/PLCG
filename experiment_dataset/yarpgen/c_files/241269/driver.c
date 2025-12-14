#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-5;
signed char var_2 = (signed char)-90;
signed char var_10 = (signed char)18;
int var_11 = 237956007;
int zero = 0;
long long int var_20 = 8551075658461389935LL;
unsigned int var_21 = 2676481102U;
signed char var_22 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
