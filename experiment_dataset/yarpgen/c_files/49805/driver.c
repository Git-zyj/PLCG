#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 928243455680596852ULL;
unsigned char var_3 = (unsigned char)212;
signed char var_9 = (signed char)74;
int zero = 0;
unsigned char var_10 = (unsigned char)147;
long long int var_11 = -4580442303210542699LL;
unsigned char var_12 = (unsigned char)223;
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
