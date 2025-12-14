#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)148;
long long int var_9 = -4587378755224832776LL;
long long int var_12 = 8785243872668658513LL;
int zero = 0;
long long int var_15 = 1836004888614805053LL;
unsigned char var_16 = (unsigned char)14;
unsigned char var_17 = (unsigned char)83;
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
