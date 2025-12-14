#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2602962242151678202LL;
unsigned int var_5 = 3944580031U;
unsigned short var_15 = (unsigned short)10664;
int zero = 0;
long long int var_18 = 1008766518937597960LL;
unsigned short var_19 = (unsigned short)1821;
void init() {
}

void checksum() {
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
