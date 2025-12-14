#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)32;
signed char var_8 = (signed char)17;
long long int var_9 = -7468167672896450198LL;
long long int var_16 = -2697111538877119806LL;
unsigned long long int var_17 = 4003683587556023625ULL;
int zero = 0;
long long int var_20 = -7614250594698176099LL;
unsigned long long int var_21 = 17395141927391012767ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
