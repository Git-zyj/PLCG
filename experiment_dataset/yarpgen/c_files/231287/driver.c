#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)120;
unsigned char var_5 = (unsigned char)213;
unsigned int var_6 = 1603654964U;
int zero = 0;
long long int var_16 = 7755446766792187692LL;
long long int var_17 = -6769443323242196976LL;
void init() {
}

void checksum() {
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
