#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 822744019U;
int var_7 = 1756345192;
unsigned long long int var_14 = 18339949706215079986ULL;
unsigned long long int var_16 = 8088428920343382062ULL;
int zero = 0;
signed char var_17 = (signed char)71;
unsigned char var_18 = (unsigned char)82;
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
