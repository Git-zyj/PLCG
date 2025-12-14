#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 536058332U;
unsigned long long int var_8 = 4025911570757041754ULL;
int zero = 0;
unsigned long long int var_10 = 18023974802521972441ULL;
unsigned short var_11 = (unsigned short)9497;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
