#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)34;
signed char var_8 = (signed char)20;
unsigned long long int var_9 = 2421627328658993880ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)203;
unsigned int var_17 = 4080112460U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
