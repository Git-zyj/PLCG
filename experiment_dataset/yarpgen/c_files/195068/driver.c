#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5485596415430360222LL;
unsigned int var_2 = 3803427347U;
unsigned short var_8 = (unsigned short)656;
int zero = 0;
short var_14 = (short)-21888;
long long int var_15 = -9093479281446184400LL;
unsigned char var_16 = (unsigned char)84;
long long int var_17 = -7888826848111814561LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
