#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-92;
signed char var_9 = (signed char)127;
unsigned int var_10 = 4098173029U;
int zero = 0;
unsigned long long int var_16 = 1967278302545511451ULL;
unsigned short var_17 = (unsigned short)21591;
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
