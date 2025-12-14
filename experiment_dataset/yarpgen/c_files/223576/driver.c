#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)31792;
_Bool var_7 = (_Bool)1;
int var_8 = -1420085723;
int zero = 0;
int var_15 = 226609072;
unsigned long long int var_16 = 12413108417118260738ULL;
unsigned long long int var_17 = 11347761940142969525ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
