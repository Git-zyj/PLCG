#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7783836485008769982LL;
long long int var_2 = -928038547274597560LL;
signed char var_9 = (signed char)-21;
int zero = 0;
short var_15 = (short)-75;
signed char var_16 = (signed char)-62;
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
