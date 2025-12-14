#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1247043664;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3637404336U;
int zero = 0;
unsigned char var_15 = (unsigned char)27;
int var_16 = -1905671817;
unsigned short var_17 = (unsigned short)52677;
unsigned long long int var_18 = 12484044519263102248ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
