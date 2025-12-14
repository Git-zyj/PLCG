#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3279681186393451767LL;
long long int var_5 = 5943883721547229812LL;
int var_10 = 440257142;
int zero = 0;
unsigned char var_15 = (unsigned char)160;
long long int var_16 = -78227505247685033LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
