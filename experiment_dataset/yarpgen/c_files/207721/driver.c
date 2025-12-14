#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3513659865U;
short var_1 = (short)4898;
unsigned int var_13 = 3795534199U;
int zero = 0;
signed char var_20 = (signed char)-39;
long long int var_21 = 5864396877289305251LL;
unsigned int var_22 = 691875666U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
