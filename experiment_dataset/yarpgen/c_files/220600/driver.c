#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2890303901307358515LL;
long long int var_6 = 4431222425108961924LL;
long long int var_8 = 9068559784178125387LL;
unsigned int var_12 = 1639688157U;
long long int var_14 = 3805467463317607527LL;
int zero = 0;
long long int var_19 = 8141415299766209132LL;
unsigned int var_20 = 2145661915U;
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
