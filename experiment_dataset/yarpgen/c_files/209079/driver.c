#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5966465710620150879LL;
long long int var_5 = 3964031071965745681LL;
signed char var_8 = (signed char)-34;
signed char var_13 = (signed char)-127;
int zero = 0;
int var_15 = -1736772450;
unsigned char var_16 = (unsigned char)102;
signed char var_17 = (signed char)-64;
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
