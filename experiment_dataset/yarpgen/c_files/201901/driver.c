#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 7364224218920662321ULL;
unsigned short var_10 = (unsigned short)60499;
int zero = 0;
unsigned long long int var_14 = 7202756927610317860ULL;
unsigned long long int var_15 = 13472542722507219393ULL;
long long int var_16 = 5211505413789658207LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
