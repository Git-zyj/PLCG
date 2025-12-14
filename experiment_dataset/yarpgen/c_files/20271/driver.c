#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10601078001311068389ULL;
unsigned long long int var_6 = 3118907909632018231ULL;
unsigned long long int var_10 = 12373178661313502112ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)50;
unsigned char var_17 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
