#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2047881595311745498LL;
signed char var_2 = (signed char)72;
long long int var_5 = 2962717694033298270LL;
int zero = 0;
long long int var_14 = 314676466995747777LL;
signed char var_15 = (signed char)-43;
unsigned char var_16 = (unsigned char)20;
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
