#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3915987338649077353LL;
unsigned char var_3 = (unsigned char)94;
unsigned int var_4 = 1273222094U;
int zero = 0;
int var_10 = 1646007592;
unsigned int var_11 = 1391525487U;
unsigned char var_12 = (unsigned char)113;
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
