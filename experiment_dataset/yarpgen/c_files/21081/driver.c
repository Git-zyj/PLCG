#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -605883379;
unsigned int var_3 = 3458452753U;
int var_4 = 1598429585;
int var_6 = 705615242;
int var_12 = -1529027504;
int zero = 0;
int var_16 = -1009668736;
unsigned int var_17 = 1499986416U;
void init() {
}

void checksum() {
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
