#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7636900604166904574LL;
unsigned int var_1 = 578010614U;
unsigned int var_3 = 3130004630U;
int var_9 = 1338125293;
unsigned long long int var_10 = 12271622831323937508ULL;
int zero = 0;
unsigned int var_15 = 2550972314U;
long long int var_16 = 6718926795080252655LL;
unsigned int var_17 = 4215171139U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
