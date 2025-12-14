#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22853;
signed char var_4 = (signed char)-21;
unsigned long long int var_10 = 16025308860774665358ULL;
int zero = 0;
unsigned int var_12 = 364265899U;
long long int var_13 = 1408246376362931091LL;
unsigned long long int var_14 = 4574366013659364961ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
