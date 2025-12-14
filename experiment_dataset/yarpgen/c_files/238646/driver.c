#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2562898189U;
int var_4 = 1718341920;
long long int var_10 = -4321939406637079756LL;
unsigned int var_13 = 386234664U;
int zero = 0;
long long int var_15 = -4006535620596619631LL;
unsigned int var_16 = 2693647742U;
signed char var_17 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
