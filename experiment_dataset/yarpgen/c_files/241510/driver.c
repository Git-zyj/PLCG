#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2136907143;
short var_1 = (short)22840;
long long int var_6 = 5340626164465064094LL;
signed char var_7 = (signed char)13;
unsigned char var_11 = (unsigned char)176;
int zero = 0;
unsigned int var_12 = 2307092782U;
unsigned long long int var_13 = 15534470156187048667ULL;
unsigned int var_14 = 1729007611U;
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
