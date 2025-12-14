#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -247639296;
long long int var_1 = -7414852833308174403LL;
unsigned char var_11 = (unsigned char)130;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
unsigned long long int var_16 = 4530664784439967742ULL;
unsigned long long int var_17 = 1628588194974264035ULL;
void init() {
}

void checksum() {
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
