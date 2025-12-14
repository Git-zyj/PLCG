#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
signed char var_3 = (signed char)60;
unsigned int var_6 = 726277681U;
unsigned int var_10 = 829703078U;
int zero = 0;
long long int var_14 = -3678799334819790589LL;
unsigned int var_15 = 3277715140U;
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
