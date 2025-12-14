#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6277229498565762855LL;
unsigned char var_9 = (unsigned char)130;
int zero = 0;
unsigned long long int var_10 = 13641648261030203705ULL;
unsigned long long int var_11 = 9361584245729583614ULL;
unsigned char var_12 = (unsigned char)38;
long long int var_13 = -561166217814462791LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
