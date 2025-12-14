#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4410050074194218803LL;
int var_9 = -770889246;
unsigned int var_15 = 1949485044U;
int var_16 = 1367991100;
int zero = 0;
int var_19 = 1796558935;
short var_20 = (short)13022;
int var_21 = -768794238;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
