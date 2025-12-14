#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
int var_1 = 499947363;
long long int var_3 = -8896579119740525208LL;
unsigned short var_7 = (unsigned short)34183;
unsigned int var_8 = 2146714611U;
unsigned long long int var_10 = 3537218105116128068ULL;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
unsigned long long int var_15 = 3559434595627084176ULL;
int var_16 = -1931622305;
signed char var_17 = (signed char)75;
unsigned short var_18 = (unsigned short)41159;
signed char var_19 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
