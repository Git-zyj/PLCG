#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
unsigned int var_3 = 974282401U;
signed char var_10 = (signed char)9;
unsigned long long int var_15 = 6186025938769321494ULL;
int zero = 0;
long long int var_18 = -5509580812454664759LL;
long long int var_19 = -3480694671135024337LL;
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
