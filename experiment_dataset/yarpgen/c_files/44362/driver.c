#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32204;
long long int var_5 = 4761624882439855397LL;
signed char var_11 = (signed char)-118;
unsigned int var_12 = 1918006525U;
int zero = 0;
unsigned int var_13 = 1766523605U;
signed char var_14 = (signed char)13;
void init() {
}

void checksum() {
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
