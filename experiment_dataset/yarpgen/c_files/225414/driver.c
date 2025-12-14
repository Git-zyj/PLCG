#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -151779753;
unsigned int var_6 = 3498053413U;
long long int var_15 = 1839686871690777838LL;
int zero = 0;
signed char var_20 = (signed char)-54;
long long int var_21 = -890904892878499244LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
