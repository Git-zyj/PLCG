#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12404763896030400523ULL;
int var_4 = 409859982;
_Bool var_6 = (_Bool)0;
unsigned char var_12 = (unsigned char)201;
int zero = 0;
unsigned short var_15 = (unsigned short)42788;
unsigned int var_16 = 1211991515U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
