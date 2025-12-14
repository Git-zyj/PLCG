#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
long long int var_1 = -3021866175012106500LL;
signed char var_2 = (signed char)104;
unsigned char var_8 = (unsigned char)14;
int zero = 0;
unsigned long long int var_10 = 11347521074870538985ULL;
signed char var_11 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
