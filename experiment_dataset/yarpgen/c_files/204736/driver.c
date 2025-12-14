#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2546500461U;
unsigned long long int var_9 = 5999109266209441590ULL;
unsigned long long int var_11 = 10298416920109343463ULL;
int zero = 0;
signed char var_15 = (signed char)-119;
unsigned int var_16 = 2104595546U;
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
