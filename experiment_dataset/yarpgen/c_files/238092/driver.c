#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -503620993;
unsigned int var_7 = 164233710U;
unsigned short var_11 = (unsigned short)13387;
short var_13 = (short)-15001;
int zero = 0;
long long int var_16 = 4681106900717991480LL;
unsigned short var_17 = (unsigned short)2297;
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
