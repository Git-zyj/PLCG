#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -324623323;
long long int var_2 = 397109503840637784LL;
short var_8 = (short)14668;
unsigned int var_11 = 902460334U;
int zero = 0;
int var_12 = 1205915424;
unsigned long long int var_13 = 16569363002776024892ULL;
long long int var_14 = 6364917546827370800LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
