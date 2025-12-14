#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2590615543178211879ULL;
unsigned short var_5 = (unsigned short)38165;
signed char var_8 = (signed char)99;
unsigned char var_9 = (unsigned char)212;
int zero = 0;
signed char var_16 = (signed char)62;
signed char var_17 = (signed char)-105;
long long int var_18 = -4607411516612013303LL;
long long int var_19 = -4873235710715749921LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
