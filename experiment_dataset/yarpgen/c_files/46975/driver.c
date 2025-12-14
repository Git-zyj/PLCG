#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1186392129;
int var_1 = 755143819;
int var_8 = 1975558937;
int var_11 = 156078998;
int var_16 = -863094640;
int zero = 0;
int var_19 = 990820899;
int var_20 = -1999323377;
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
