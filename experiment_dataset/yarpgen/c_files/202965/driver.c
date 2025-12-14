#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5623060844434008619ULL;
unsigned short var_4 = (unsigned short)16678;
unsigned short var_5 = (unsigned short)57193;
unsigned int var_12 = 2870977814U;
int zero = 0;
unsigned int var_19 = 1872607773U;
long long int var_20 = -2315381996950606383LL;
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
