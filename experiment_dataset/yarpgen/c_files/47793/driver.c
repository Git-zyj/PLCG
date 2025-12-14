#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4176742728581732990LL;
unsigned int var_9 = 89149242U;
int var_15 = -424966068;
int zero = 0;
unsigned long long int var_20 = 4360034286215391059ULL;
int var_21 = -183914828;
unsigned int var_22 = 1601026411U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
