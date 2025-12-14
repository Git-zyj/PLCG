#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5580897295442214316LL;
unsigned int var_8 = 2286814228U;
unsigned int var_9 = 1455142542U;
int zero = 0;
unsigned short var_15 = (unsigned short)12389;
unsigned short var_16 = (unsigned short)64942;
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
