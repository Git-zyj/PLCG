#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8570845025444101277LL;
short var_1 = (short)26142;
unsigned short var_9 = (unsigned short)14566;
unsigned char var_10 = (unsigned char)245;
short var_14 = (short)11400;
unsigned long long int var_16 = 17073344054465420179ULL;
int zero = 0;
signed char var_20 = (signed char)100;
short var_21 = (short)32491;
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
