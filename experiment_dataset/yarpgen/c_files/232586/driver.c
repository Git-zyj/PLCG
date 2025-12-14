#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 961893913U;
unsigned char var_9 = (unsigned char)48;
unsigned char var_10 = (unsigned char)56;
signed char var_12 = (signed char)85;
int zero = 0;
unsigned long long int var_14 = 15555470173833847044ULL;
unsigned char var_15 = (unsigned char)174;
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
