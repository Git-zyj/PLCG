#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1478701448U;
unsigned long long int var_5 = 14376540671823103282ULL;
int zero = 0;
signed char var_12 = (signed char)79;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1511629413U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
