#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16782329845454614822ULL;
unsigned char var_9 = (unsigned char)99;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 4653652377076458967ULL;
unsigned char var_13 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
