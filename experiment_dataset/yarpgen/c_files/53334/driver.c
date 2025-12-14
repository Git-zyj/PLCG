#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3081468366277788443LL;
unsigned short var_10 = (unsigned short)50391;
int var_11 = 1905876396;
int zero = 0;
unsigned short var_12 = (unsigned short)60909;
unsigned char var_13 = (unsigned char)223;
short var_14 = (short)-23183;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
