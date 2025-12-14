#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5571151451723101904LL;
unsigned long long int var_9 = 6855789562087564001ULL;
int zero = 0;
unsigned long long int var_11 = 12911942945506048110ULL;
signed char var_12 = (signed char)8;
long long int var_13 = 4050573697831889596LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
