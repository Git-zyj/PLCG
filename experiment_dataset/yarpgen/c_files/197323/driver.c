#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)12744;
int var_15 = -1104877653;
unsigned long long int var_16 = 6573630517615892999ULL;
unsigned long long int var_17 = 14263320781406872367ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)148;
int var_19 = -547272788;
int var_20 = -1433671863;
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
