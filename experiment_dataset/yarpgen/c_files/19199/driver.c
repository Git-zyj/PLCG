#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 6963983621220319038LL;
unsigned long long int var_13 = 8467022634918655872ULL;
signed char var_17 = (signed char)13;
int zero = 0;
unsigned int var_18 = 936952694U;
short var_19 = (short)-25926;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
