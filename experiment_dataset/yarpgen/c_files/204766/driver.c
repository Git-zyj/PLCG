#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -242496024666168291LL;
unsigned long long int var_9 = 11815461877590480096ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)254;
unsigned int var_12 = 1809401684U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
