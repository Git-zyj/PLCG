#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 816661151U;
signed char var_5 = (signed char)34;
unsigned short var_10 = (unsigned short)45392;
unsigned long long int var_12 = 16221098225556807516ULL;
long long int var_15 = -9173559824538185414LL;
int zero = 0;
int var_16 = -411086379;
unsigned char var_17 = (unsigned char)245;
unsigned short var_18 = (unsigned short)58281;
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
