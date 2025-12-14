#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 1956321041;
int zero = 0;
unsigned long long int var_13 = 4953879170204016828ULL;
unsigned char var_14 = (unsigned char)183;
long long int var_15 = 7193293616320470499LL;
int var_16 = 887373199;
int var_17 = -713260807;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
