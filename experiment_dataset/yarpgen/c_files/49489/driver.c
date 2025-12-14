#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)241;
unsigned char var_9 = (unsigned char)158;
_Bool var_11 = (_Bool)0;
unsigned char var_16 = (unsigned char)55;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
unsigned long long int var_18 = 9952347229359374138ULL;
signed char var_19 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
