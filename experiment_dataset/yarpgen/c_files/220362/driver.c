#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1912024101U;
unsigned char var_17 = (unsigned char)58;
int zero = 0;
signed char var_18 = (signed char)89;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
int var_21 = 935557319;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
