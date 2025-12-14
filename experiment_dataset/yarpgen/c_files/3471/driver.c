#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-56;
unsigned int var_5 = 467285034U;
signed char var_9 = (signed char)-106;
unsigned int var_10 = 7831185U;
int zero = 0;
long long int var_13 = -1480373913627305970LL;
signed char var_14 = (signed char)99;
unsigned char var_15 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
