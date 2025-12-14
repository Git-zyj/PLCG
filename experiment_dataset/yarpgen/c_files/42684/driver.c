#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4304356454444208624LL;
unsigned int var_9 = 3445187126U;
int zero = 0;
unsigned long long int var_17 = 16523148313305132096ULL;
unsigned int var_18 = 1191410808U;
short var_19 = (short)23069;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
