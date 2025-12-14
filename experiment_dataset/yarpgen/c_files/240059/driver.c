#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -689053137;
long long int var_8 = 8264334331637595310LL;
long long int var_9 = 4286363539561601227LL;
int var_16 = 2049185950;
int zero = 0;
unsigned short var_17 = (unsigned short)22726;
long long int var_18 = 2639515569145753921LL;
long long int var_19 = 1183899258467708090LL;
long long int var_20 = 5383115862033852263LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
