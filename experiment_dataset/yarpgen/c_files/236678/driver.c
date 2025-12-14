#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9009166977507112314LL;
unsigned long long int var_16 = 17956146585549017029ULL;
short var_18 = (short)5616;
int zero = 0;
long long int var_19 = 6429315354078338665LL;
unsigned short var_20 = (unsigned short)63347;
void init() {
}

void checksum() {
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
