#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13583262324347510579ULL;
unsigned char var_7 = (unsigned char)114;
long long int var_8 = 4364138988017615771LL;
int var_10 = 318727888;
unsigned long long int var_13 = 10202034392407691453ULL;
int zero = 0;
unsigned int var_14 = 587565876U;
unsigned char var_15 = (unsigned char)236;
long long int var_16 = 8562083795898590492LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
