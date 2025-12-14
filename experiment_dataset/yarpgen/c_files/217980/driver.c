#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3811263557869488017LL;
unsigned int var_8 = 2138358729U;
int zero = 0;
unsigned int var_11 = 3066994769U;
unsigned long long int var_12 = 13504521511160975517ULL;
long long int var_13 = -203000603532389322LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
