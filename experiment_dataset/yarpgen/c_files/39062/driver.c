#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7047201745480924613LL;
unsigned int var_16 = 3772833920U;
unsigned char var_17 = (unsigned char)223;
int zero = 0;
unsigned long long int var_18 = 2405281335098239804ULL;
unsigned long long int var_19 = 11011287135084246661ULL;
long long int var_20 = 1495496914047375319LL;
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
