#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2069078083;
unsigned int var_9 = 2959701778U;
int var_10 = -184446548;
int var_11 = 583031952;
long long int var_16 = -6698013462498412692LL;
int zero = 0;
long long int var_20 = -4672728798137422535LL;
unsigned short var_21 = (unsigned short)38471;
unsigned char var_22 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
