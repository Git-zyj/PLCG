#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3445153936567412490LL;
unsigned short var_6 = (unsigned short)49500;
unsigned int var_10 = 3220780697U;
unsigned short var_14 = (unsigned short)20703;
int zero = 0;
unsigned long long int var_19 = 1295271118751168886ULL;
long long int var_20 = -8672887229012857170LL;
unsigned long long int var_21 = 9324392546190911707ULL;
unsigned int var_22 = 1961667443U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
