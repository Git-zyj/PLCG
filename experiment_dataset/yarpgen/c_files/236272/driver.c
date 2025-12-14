#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2399454197U;
unsigned int var_4 = 2893518034U;
unsigned short var_6 = (unsigned short)59665;
long long int var_7 = 5513211643083923064LL;
long long int var_10 = 8939600104009885000LL;
signed char var_15 = (signed char)123;
int zero = 0;
unsigned short var_20 = (unsigned short)60495;
unsigned int var_21 = 941596228U;
unsigned char var_22 = (unsigned char)102;
unsigned char var_23 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
