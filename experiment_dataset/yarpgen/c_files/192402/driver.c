#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 100853794U;
int var_8 = 768098602;
unsigned long long int var_10 = 16142737282004450463ULL;
short var_11 = (short)976;
unsigned long long int var_15 = 507669692939466142ULL;
int zero = 0;
unsigned long long int var_17 = 17127548857666013598ULL;
unsigned long long int var_18 = 12519577233585287572ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
