#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6166901933177030858ULL;
int var_7 = 2080267455;
unsigned long long int var_8 = 15505382887330611083ULL;
unsigned int var_12 = 4054969298U;
int zero = 0;
unsigned int var_19 = 1458350117U;
unsigned int var_20 = 1587728929U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
