#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2041765535;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)214;
int var_9 = 1543588654;
signed char var_10 = (signed char)3;
int zero = 0;
unsigned int var_17 = 2722836399U;
long long int var_18 = -3392970822766519596LL;
void init() {
}

void checksum() {
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
