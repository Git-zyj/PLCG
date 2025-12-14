#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1738009925U;
unsigned int var_6 = 3432664817U;
long long int var_8 = 3098612544994262796LL;
unsigned int var_10 = 137887407U;
int zero = 0;
unsigned int var_16 = 4190967764U;
signed char var_17 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
