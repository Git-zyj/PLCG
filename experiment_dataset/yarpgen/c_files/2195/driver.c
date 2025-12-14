#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4155461904U;
unsigned long long int var_8 = 5310688067734921786ULL;
long long int var_12 = 8536988433628953471LL;
int zero = 0;
int var_14 = 1813162641;
unsigned char var_15 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
