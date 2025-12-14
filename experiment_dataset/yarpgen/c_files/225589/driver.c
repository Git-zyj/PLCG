#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1884386144;
unsigned int var_5 = 3900344083U;
unsigned int var_9 = 647548705U;
int zero = 0;
long long int var_19 = -2052921875505728568LL;
signed char var_20 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
