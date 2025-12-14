#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1828480085U;
unsigned int var_15 = 1660637333U;
int zero = 0;
long long int var_17 = -567137991480353420LL;
unsigned char var_18 = (unsigned char)109;
long long int var_19 = -5947982008017889944LL;
short var_20 = (short)11507;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
