#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
long long int var_2 = -4901676440942899060LL;
unsigned int var_4 = 288732740U;
long long int var_7 = 9019766738022322651LL;
int zero = 0;
signed char var_10 = (signed char)48;
unsigned char var_11 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
