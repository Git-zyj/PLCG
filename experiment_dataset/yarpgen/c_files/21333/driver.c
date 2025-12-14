#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 14756990355603819833ULL;
unsigned int var_3 = 3886688175U;
unsigned char var_7 = (unsigned char)244;
int var_10 = -1592648170;
int zero = 0;
unsigned char var_11 = (unsigned char)43;
unsigned long long int var_12 = 4759731846934377593ULL;
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
