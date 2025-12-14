#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 630772787;
long long int var_3 = 8535112294491574537LL;
unsigned int var_5 = 498183175U;
unsigned short var_6 = (unsigned short)5215;
int zero = 0;
long long int var_12 = 4424258127924909455LL;
signed char var_13 = (signed char)-92;
unsigned char var_14 = (unsigned char)47;
signed char var_15 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
