#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1402736064U;
unsigned char var_1 = (unsigned char)47;
unsigned char var_5 = (unsigned char)150;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)45;
unsigned char var_18 = (unsigned char)182;
unsigned char var_19 = (unsigned char)245;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
