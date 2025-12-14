#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1818851272806405311LL;
unsigned short var_18 = (unsigned short)13995;
int zero = 0;
unsigned long long int var_20 = 7453698725614027446ULL;
unsigned long long int var_21 = 8634707649566644973ULL;
unsigned long long int var_22 = 3169112617520583610ULL;
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
