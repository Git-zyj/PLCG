#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18794;
unsigned short var_4 = (unsigned short)46752;
int var_5 = 690272291;
int var_11 = -377849825;
int var_13 = -1929007716;
int var_17 = 1613937934;
unsigned long long int var_19 = 5883180400981870977ULL;
int zero = 0;
unsigned long long int var_20 = 9380171690388015647ULL;
int var_21 = -951501112;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
