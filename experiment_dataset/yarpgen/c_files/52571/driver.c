#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1946782708416321634LL;
unsigned long long int var_2 = 8800682488331800262ULL;
unsigned char var_3 = (unsigned char)133;
long long int var_6 = 6776706859698757236LL;
int zero = 0;
unsigned int var_10 = 1146776732U;
int var_11 = -2040509628;
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
