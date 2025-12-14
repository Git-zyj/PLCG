#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)19;
unsigned long long int var_6 = 2592945286361854976ULL;
unsigned long long int var_9 = 16880743484775190208ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3545069582U;
unsigned int var_19 = 595440446U;
unsigned char var_20 = (unsigned char)8;
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
