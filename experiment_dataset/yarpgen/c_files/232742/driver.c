#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)133;
long long int var_9 = -1071213173593635836LL;
long long int var_11 = -2204843858652313709LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-18670;
signed char var_14 = (signed char)-122;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
