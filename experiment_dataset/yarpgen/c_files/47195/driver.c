#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4153221188U;
_Bool var_5 = (_Bool)1;
unsigned char var_14 = (unsigned char)103;
unsigned int var_15 = 1040166222U;
int zero = 0;
unsigned long long int var_20 = 15875930339595126385ULL;
short var_21 = (short)-1393;
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
