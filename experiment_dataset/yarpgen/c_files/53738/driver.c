#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned char var_3 = (unsigned char)78;
signed char var_6 = (signed char)-113;
int var_7 = -255719602;
unsigned long long int var_9 = 17912943380421649400ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)143;
unsigned char var_13 = (unsigned char)126;
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
