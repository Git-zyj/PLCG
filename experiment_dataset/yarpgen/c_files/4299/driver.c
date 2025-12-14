#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
unsigned int var_1 = 428210090U;
unsigned int var_8 = 1357874181U;
int zero = 0;
long long int var_12 = 415821633465915873LL;
unsigned int var_13 = 1151218930U;
unsigned int var_14 = 3516035702U;
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
