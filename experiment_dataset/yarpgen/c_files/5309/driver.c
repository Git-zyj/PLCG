#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 447428461837930627ULL;
unsigned char var_6 = (unsigned char)140;
unsigned int var_14 = 2873156687U;
int zero = 0;
long long int var_16 = -1802091460387264861LL;
long long int var_17 = -2726133604556473673LL;
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
