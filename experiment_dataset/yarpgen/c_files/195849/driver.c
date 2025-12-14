#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4912747968334805715LL;
long long int var_6 = 5598197440408632404LL;
int zero = 0;
long long int var_17 = -8775308447781235753LL;
long long int var_18 = -6266626902696142676LL;
unsigned short var_19 = (unsigned short)20807;
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
