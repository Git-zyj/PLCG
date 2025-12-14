#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)70;
unsigned char var_5 = (unsigned char)30;
unsigned long long int var_9 = 15309830659776297949ULL;
unsigned long long int var_16 = 2251452613968625995ULL;
unsigned int var_18 = 345888890U;
int zero = 0;
unsigned long long int var_19 = 11650875349154514071ULL;
unsigned long long int var_20 = 8081362762722829993ULL;
void init() {
}

void checksum() {
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
