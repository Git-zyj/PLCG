#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1234271586U;
unsigned long long int var_5 = 17865787688828911880ULL;
unsigned int var_9 = 3490214759U;
int var_10 = -604062601;
int zero = 0;
signed char var_15 = (signed char)31;
unsigned int var_16 = 598402737U;
unsigned int var_17 = 4046028848U;
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
