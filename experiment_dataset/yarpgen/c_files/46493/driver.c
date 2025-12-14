#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5406577586409032494LL;
unsigned char var_5 = (unsigned char)40;
unsigned short var_12 = (unsigned short)10323;
unsigned int var_16 = 2953349857U;
unsigned int var_17 = 3857017707U;
int zero = 0;
signed char var_20 = (signed char)105;
unsigned int var_21 = 1354633450U;
unsigned int var_22 = 2038485847U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
