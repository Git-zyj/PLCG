#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1626887287U;
long long int var_13 = 3640405308852227932LL;
unsigned int var_18 = 1072163574U;
int zero = 0;
long long int var_19 = -834583714864157158LL;
long long int var_20 = -8734102001759355555LL;
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
