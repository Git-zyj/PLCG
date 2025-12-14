#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2125147745U;
unsigned int var_3 = 4138964900U;
unsigned char var_5 = (unsigned char)105;
int zero = 0;
int var_10 = 200269627;
unsigned long long int var_11 = 3773662119023716472ULL;
unsigned char var_12 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
