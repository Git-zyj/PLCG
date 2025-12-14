#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1489737343755573729LL;
unsigned int var_14 = 1629101874U;
int var_15 = 464933069;
int zero = 0;
unsigned long long int var_18 = 10666343129033917308ULL;
int var_19 = -752373727;
long long int var_20 = -8005431619990097552LL;
long long int var_21 = -3679122651471623245LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
