#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -40059372;
unsigned char var_4 = (unsigned char)233;
signed char var_9 = (signed char)59;
unsigned short var_10 = (unsigned short)59648;
unsigned char var_11 = (unsigned char)93;
int zero = 0;
long long int var_18 = -4582171769875333113LL;
unsigned char var_19 = (unsigned char)44;
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
