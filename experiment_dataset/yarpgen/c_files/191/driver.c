#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7772;
unsigned int var_7 = 2255608782U;
unsigned long long int var_9 = 9811522332521287342ULL;
int zero = 0;
long long int var_14 = 2456312161287762901LL;
unsigned int var_15 = 3069260016U;
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
