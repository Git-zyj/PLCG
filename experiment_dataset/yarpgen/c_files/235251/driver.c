#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5010228516032077843LL;
unsigned char var_14 = (unsigned char)112;
int zero = 0;
unsigned char var_16 = (unsigned char)132;
unsigned int var_17 = 1318103888U;
long long int var_18 = -4236426956753902083LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
