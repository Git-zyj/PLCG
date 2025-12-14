#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8709741826569541532ULL;
unsigned long long int var_10 = 10506593014522228899ULL;
signed char var_12 = (signed char)102;
unsigned char var_13 = (unsigned char)61;
int zero = 0;
unsigned int var_17 = 3475994649U;
signed char var_18 = (signed char)-66;
long long int var_19 = -1804314378861368072LL;
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
