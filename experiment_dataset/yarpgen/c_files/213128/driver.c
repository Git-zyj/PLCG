#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5034674376145912012LL;
signed char var_4 = (signed char)103;
int var_8 = -1106780129;
int var_9 = 837178615;
unsigned char var_10 = (unsigned char)107;
int zero = 0;
short var_12 = (short)-16388;
unsigned char var_13 = (unsigned char)176;
unsigned long long int var_14 = 16568860578237159041ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
