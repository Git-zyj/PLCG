#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6715286814765703561ULL;
unsigned int var_4 = 3755736814U;
unsigned short var_5 = (unsigned short)13756;
unsigned int var_7 = 1206326583U;
int zero = 0;
int var_12 = -200216709;
long long int var_13 = -6377044214919297951LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
