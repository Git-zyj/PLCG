#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8634148875336615932LL;
signed char var_1 = (signed char)36;
unsigned char var_7 = (unsigned char)114;
unsigned char var_14 = (unsigned char)139;
unsigned char var_15 = (unsigned char)215;
unsigned char var_16 = (unsigned char)193;
int zero = 0;
long long int var_17 = -8374544349035201557LL;
long long int var_18 = 2896812173135749153LL;
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
