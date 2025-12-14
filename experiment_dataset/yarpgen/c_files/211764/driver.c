#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1884595640;
int var_2 = -1753967884;
unsigned int var_4 = 4002292714U;
int var_5 = 1013732325;
int var_10 = -1767875850;
int zero = 0;
unsigned char var_11 = (unsigned char)255;
int var_12 = -1877867945;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
