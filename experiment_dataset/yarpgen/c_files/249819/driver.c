#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7311714069187071439LL;
unsigned long long int var_3 = 10771011224464786112ULL;
int var_4 = 1055559145;
int var_8 = -343797388;
int zero = 0;
int var_12 = 1033648568;
long long int var_13 = -414286696818223978LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
