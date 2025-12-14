#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -284679801;
unsigned int var_3 = 1201892311U;
unsigned int var_7 = 1435678174U;
unsigned char var_10 = (unsigned char)114;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 476916627U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
