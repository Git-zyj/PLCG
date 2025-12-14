#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1402465440;
int var_9 = -1758192645;
long long int var_12 = 7363535237235876275LL;
signed char var_13 = (signed char)91;
signed char var_15 = (signed char)-111;
signed char var_17 = (signed char)109;
int zero = 0;
signed char var_19 = (signed char)48;
unsigned long long int var_20 = 11498846343413448245ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
