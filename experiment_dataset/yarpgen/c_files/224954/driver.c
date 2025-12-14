#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)121;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 17819264333097969711ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_18 = 720084820;
short var_19 = (short)-9824;
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
