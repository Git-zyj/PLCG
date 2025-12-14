#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 2213444133180585146ULL;
unsigned long long int var_11 = 3031528329964666403ULL;
unsigned int var_12 = 3643392850U;
signed char var_13 = (signed char)70;
unsigned int var_14 = 2620450329U;
int zero = 0;
long long int var_17 = 8637461183024265666LL;
int var_18 = -317483978;
void init() {
}

void checksum() {
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
