#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_14 = (short)-2958;
long long int var_15 = 7131633086445498814LL;
int var_17 = 649719938;
int zero = 0;
long long int var_19 = 467869163542047736LL;
long long int var_20 = -110422748662441967LL;
long long int var_21 = -1035480018681493224LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
