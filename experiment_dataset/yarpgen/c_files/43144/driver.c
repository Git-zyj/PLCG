#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 14716038;
unsigned char var_5 = (unsigned char)49;
unsigned char var_7 = (unsigned char)153;
unsigned long long int var_8 = 17365513995424061274ULL;
int zero = 0;
short var_11 = (short)-14076;
unsigned int var_12 = 841459671U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
