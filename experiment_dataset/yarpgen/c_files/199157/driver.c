#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39800;
unsigned short var_2 = (unsigned short)1913;
unsigned short var_5 = (unsigned short)11722;
int zero = 0;
unsigned short var_11 = (unsigned short)37137;
unsigned short var_12 = (unsigned short)64262;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
