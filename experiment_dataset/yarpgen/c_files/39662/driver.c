#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1764642265U;
unsigned long long int var_7 = 12790556361370266805ULL;
unsigned char var_8 = (unsigned char)223;
unsigned char var_13 = (unsigned char)163;
int zero = 0;
long long int var_20 = -237380025708716943LL;
unsigned int var_21 = 541201919U;
int var_22 = 125020239;
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
