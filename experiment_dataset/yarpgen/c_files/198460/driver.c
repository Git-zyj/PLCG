#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26592;
unsigned long long int var_1 = 15962789125521820181ULL;
int var_7 = 1382017089;
int var_11 = -924668837;
unsigned char var_12 = (unsigned char)212;
int var_15 = -1525289427;
int zero = 0;
unsigned char var_16 = (unsigned char)149;
unsigned short var_17 = (unsigned short)23133;
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
