#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7645191713616610853LL;
unsigned long long int var_3 = 2435752794722114983ULL;
unsigned int var_4 = 3292608008U;
unsigned short var_10 = (unsigned short)700;
int zero = 0;
int var_14 = 529321217;
long long int var_15 = 4314438210773505746LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
