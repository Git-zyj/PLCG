#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1362669885574812081ULL;
unsigned int var_6 = 3934311906U;
int zero = 0;
unsigned int var_15 = 208885763U;
unsigned char var_16 = (unsigned char)28;
unsigned int var_17 = 2429745668U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
