#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
unsigned int var_5 = 2960328U;
unsigned long long int var_9 = 300652523499850718ULL;
unsigned long long int var_11 = 2442674181395195715ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4011318935U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
