#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 174975428U;
unsigned char var_9 = (unsigned char)244;
unsigned long long int var_11 = 17622070526852640491ULL;
int zero = 0;
long long int var_15 = -1421542106438809071LL;
unsigned long long int var_16 = 1675732071230933375ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
