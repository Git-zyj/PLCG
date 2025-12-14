#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 3966852850U;
unsigned char var_9 = (unsigned char)111;
unsigned int var_14 = 1786092654U;
int zero = 0;
unsigned long long int var_18 = 14537666469392661192ULL;
int var_19 = -479826468;
signed char var_20 = (signed char)76;
void init() {
}

void checksum() {
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
