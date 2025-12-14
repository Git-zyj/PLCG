#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 2045989195;
unsigned char var_9 = (unsigned char)29;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)96;
unsigned long long int var_17 = 6094381406634476533ULL;
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
