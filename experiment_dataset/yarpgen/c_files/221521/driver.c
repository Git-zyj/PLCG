#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2741175478228052442LL;
signed char var_3 = (signed char)59;
int var_4 = -410840456;
unsigned int var_9 = 3579355692U;
unsigned int var_10 = 2592630773U;
int zero = 0;
long long int var_12 = -6878024214717802112LL;
unsigned char var_13 = (unsigned char)109;
unsigned int var_14 = 1353657796U;
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
