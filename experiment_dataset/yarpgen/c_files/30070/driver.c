#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)95;
_Bool var_2 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)250;
unsigned long long int var_11 = 12145392581045612196ULL;
signed char var_12 = (signed char)-40;
int var_13 = 1006358985;
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
