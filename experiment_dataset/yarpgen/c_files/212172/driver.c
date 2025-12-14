#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3499932678U;
long long int var_3 = -4199104294391432294LL;
unsigned short var_8 = (unsigned short)34298;
unsigned int var_9 = 2065824963U;
unsigned int var_12 = 3128718523U;
int zero = 0;
unsigned int var_14 = 3887580009U;
long long int var_15 = -7975542482597780045LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
