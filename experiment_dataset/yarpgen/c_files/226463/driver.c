#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1376202721U;
long long int var_4 = 5720798563859259513LL;
unsigned int var_7 = 1062863987U;
long long int var_11 = -6722775109186373260LL;
int zero = 0;
unsigned int var_13 = 4042696955U;
long long int var_14 = -448764752528011999LL;
unsigned int var_15 = 1153169376U;
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
