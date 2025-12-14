#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18275884738199964346ULL;
unsigned int var_5 = 1691575152U;
unsigned long long int var_7 = 2145248311019874609ULL;
unsigned long long int var_9 = 14228200654194283040ULL;
int zero = 0;
unsigned int var_15 = 3278267699U;
unsigned char var_16 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
