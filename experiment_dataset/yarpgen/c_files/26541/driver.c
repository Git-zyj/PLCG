#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8469447530211719246LL;
long long int var_3 = -5752688675433652476LL;
int var_9 = -1621488615;
int zero = 0;
signed char var_10 = (signed char)107;
unsigned char var_11 = (unsigned char)31;
unsigned int var_12 = 1550898047U;
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
