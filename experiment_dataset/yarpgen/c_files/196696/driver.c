#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 231011245;
unsigned long long int var_4 = 11404685133698867334ULL;
long long int var_14 = -2714628233491067018LL;
int zero = 0;
long long int var_17 = 9223025418154132131LL;
long long int var_18 = -6323685885112001505LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
