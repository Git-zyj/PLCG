#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1201698590;
unsigned char var_9 = (unsigned char)148;
int zero = 0;
unsigned int var_18 = 3137360806U;
long long int var_19 = -3876703367641898570LL;
unsigned char var_20 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
