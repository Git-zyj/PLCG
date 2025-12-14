#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)68;
unsigned short var_6 = (unsigned short)32907;
unsigned char var_7 = (unsigned char)90;
unsigned char var_8 = (unsigned char)146;
long long int var_9 = 1187103440825653178LL;
int zero = 0;
unsigned int var_10 = 3240141120U;
int var_11 = -107529082;
long long int var_12 = -8338656579695351962LL;
int var_13 = -1134223358;
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
