#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6735325512342946678LL;
unsigned char var_7 = (unsigned char)4;
unsigned char var_9 = (unsigned char)41;
unsigned char var_15 = (unsigned char)82;
unsigned char var_16 = (unsigned char)69;
int zero = 0;
unsigned long long int var_17 = 12912168551687070944ULL;
int var_18 = -1269317532;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
