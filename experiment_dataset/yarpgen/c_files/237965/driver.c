#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2452948053U;
unsigned int var_4 = 359842487U;
unsigned int var_8 = 2374559400U;
unsigned short var_9 = (unsigned short)28818;
int zero = 0;
unsigned long long int var_10 = 13185005061971631221ULL;
unsigned long long int var_11 = 1012775150450698591ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
