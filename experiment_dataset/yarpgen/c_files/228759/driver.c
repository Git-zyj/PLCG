#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5501472204461774088LL;
_Bool var_6 = (_Bool)0;
short var_10 = (short)9028;
int zero = 0;
unsigned int var_20 = 50229661U;
unsigned long long int var_21 = 18421176513190864835ULL;
void init() {
}

void checksum() {
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
