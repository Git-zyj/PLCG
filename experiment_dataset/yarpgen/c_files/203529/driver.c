#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -119974969;
long long int var_9 = -8957135899455407903LL;
int zero = 0;
unsigned int var_14 = 936671525U;
unsigned long long int var_15 = 9285112778729673379ULL;
unsigned long long int var_16 = 16147400531678659815ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
