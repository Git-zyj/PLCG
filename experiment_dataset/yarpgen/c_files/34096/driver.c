#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2814973685U;
unsigned long long int var_8 = 5452618465025789901ULL;
signed char var_10 = (signed char)122;
int zero = 0;
long long int var_18 = 5487506454981465467LL;
int var_19 = -1609560188;
int var_20 = -1521720320;
void init() {
}

void checksum() {
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
