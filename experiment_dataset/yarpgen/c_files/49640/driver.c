#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4019889928510723455LL;
long long int var_3 = -9826536355918311LL;
unsigned int var_4 = 1898583525U;
int var_6 = -1238814819;
int var_9 = -1908438771;
int zero = 0;
int var_10 = -2130645695;
unsigned int var_11 = 3598360306U;
unsigned int var_12 = 3788462740U;
long long int var_13 = 4102944317598704700LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
