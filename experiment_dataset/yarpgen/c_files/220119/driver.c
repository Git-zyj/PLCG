#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 758038126;
unsigned char var_3 = (unsigned char)137;
int var_6 = 1177400792;
unsigned char var_8 = (unsigned char)59;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 307303117;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
