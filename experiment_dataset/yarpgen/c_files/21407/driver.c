#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6836348988150122679ULL;
unsigned char var_6 = (unsigned char)229;
unsigned int var_12 = 3761440483U;
int var_15 = 525558533;
int zero = 0;
unsigned short var_18 = (unsigned short)58495;
long long int var_19 = -3333832804746793676LL;
void init() {
}

void checksum() {
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
