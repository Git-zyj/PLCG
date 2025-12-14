#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 118825814;
long long int var_4 = 5154486841224717348LL;
unsigned int var_6 = 1982556361U;
signed char var_11 = (signed char)104;
int zero = 0;
long long int var_12 = 8561907408867697484LL;
short var_13 = (short)-27402;
long long int var_14 = 9196072024043349760LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
