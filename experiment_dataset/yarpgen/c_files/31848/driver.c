#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1557887122;
unsigned long long int var_10 = 14168346378585408101ULL;
int var_18 = -1430297077;
int zero = 0;
unsigned long long int var_19 = 6936484747173407000ULL;
unsigned short var_20 = (unsigned short)20179;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
