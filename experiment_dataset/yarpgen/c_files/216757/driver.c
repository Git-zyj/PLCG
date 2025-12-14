#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7891863702051749500LL;
unsigned long long int var_1 = 2634296838685764029ULL;
int var_4 = 1081713908;
int zero = 0;
int var_10 = -58841338;
signed char var_11 = (signed char)-18;
unsigned long long int var_12 = 9798064017379297139ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
