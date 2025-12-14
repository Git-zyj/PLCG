#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3224861134U;
long long int var_1 = -7378345746612969345LL;
unsigned int var_7 = 811795373U;
unsigned short var_9 = (unsigned short)63112;
int zero = 0;
unsigned int var_17 = 3269269928U;
unsigned int var_18 = 3689373888U;
unsigned short var_19 = (unsigned short)18646;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
