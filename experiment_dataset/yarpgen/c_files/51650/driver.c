#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4948168643114021110LL;
unsigned int var_18 = 1405540458U;
int zero = 0;
signed char var_20 = (signed char)70;
unsigned long long int var_21 = 108654217150177877ULL;
signed char var_22 = (signed char)54;
unsigned char var_23 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
