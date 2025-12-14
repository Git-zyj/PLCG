#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)100;
short var_6 = (short)16120;
long long int var_7 = 112721452081490380LL;
signed char var_9 = (signed char)114;
unsigned long long int var_11 = 14797990916276342073ULL;
int zero = 0;
unsigned int var_12 = 472331580U;
unsigned long long int var_13 = 7631812003536698210ULL;
short var_14 = (short)15473;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
