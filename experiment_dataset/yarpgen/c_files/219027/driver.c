#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-28685;
unsigned long long int var_9 = 11335220789389617222ULL;
unsigned short var_15 = (unsigned short)50685;
int zero = 0;
unsigned int var_18 = 966956166U;
signed char var_19 = (signed char)14;
unsigned short var_20 = (unsigned short)23059;
void init() {
}

void checksum() {
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
