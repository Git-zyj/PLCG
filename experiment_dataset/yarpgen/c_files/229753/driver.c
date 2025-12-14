#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4224333948U;
unsigned char var_2 = (unsigned char)33;
unsigned int var_11 = 669196428U;
unsigned long long int var_12 = 17247836395996481151ULL;
int zero = 0;
unsigned int var_16 = 1503305079U;
int var_17 = -1791854189;
long long int var_18 = 5831873348077783028LL;
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
