#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18349282877881743183ULL;
unsigned long long int var_5 = 16267077154442139208ULL;
unsigned long long int var_6 = 16667788208222950284ULL;
int zero = 0;
unsigned long long int var_12 = 18285512614786328178ULL;
unsigned long long int var_13 = 7198332707472068084ULL;
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
