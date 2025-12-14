#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4567315125182417009ULL;
unsigned long long int var_4 = 2143070587787321188ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)157;
unsigned long long int var_21 = 10615356513864867833ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
