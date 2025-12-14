#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29553;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)254;
unsigned char var_11 = (unsigned char)219;
unsigned long long int var_12 = 2934920171737667576ULL;
unsigned int var_13 = 3622562094U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
