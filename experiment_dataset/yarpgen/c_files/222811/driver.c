#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43290;
unsigned char var_1 = (unsigned char)57;
unsigned int var_2 = 4219524682U;
unsigned int var_15 = 627327094U;
int zero = 0;
unsigned short var_20 = (unsigned short)38349;
int var_21 = -492511303;
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
