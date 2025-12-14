#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2821048872U;
unsigned char var_16 = (unsigned char)252;
int zero = 0;
unsigned int var_20 = 4058979675U;
unsigned long long int var_21 = 3890694099178134012ULL;
int var_22 = 1632548836;
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
