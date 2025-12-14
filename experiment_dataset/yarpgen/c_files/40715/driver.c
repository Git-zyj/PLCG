#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6121930348145625649LL;
int var_3 = 1594485186;
int var_8 = 996615446;
int var_15 = 269111439;
unsigned long long int var_17 = 12691340616724299173ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)110;
unsigned char var_19 = (unsigned char)79;
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
