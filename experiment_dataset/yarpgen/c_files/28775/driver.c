#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)38;
int var_9 = 634658698;
long long int var_12 = -4462696759727810767LL;
int zero = 0;
unsigned char var_14 = (unsigned char)185;
long long int var_15 = 6021545739294090684LL;
unsigned int var_16 = 3492486349U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
