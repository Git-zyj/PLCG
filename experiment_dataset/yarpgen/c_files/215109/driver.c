#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1788543385;
unsigned int var_7 = 2008751310U;
unsigned long long int var_10 = 8245809881758401607ULL;
int zero = 0;
unsigned int var_13 = 42087788U;
unsigned char var_14 = (unsigned char)189;
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
