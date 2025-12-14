#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7465854322235987022LL;
unsigned long long int var_4 = 17283077234479437022ULL;
unsigned char var_15 = (unsigned char)191;
unsigned long long int var_16 = 9272976559295326052ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)41;
short var_21 = (short)-22180;
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
