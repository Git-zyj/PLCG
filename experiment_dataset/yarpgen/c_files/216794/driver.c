#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1440462646294811130LL;
unsigned short var_4 = (unsigned short)51439;
long long int var_6 = -6151786852466906797LL;
short var_8 = (short)-969;
int zero = 0;
long long int var_10 = 2903906236245336LL;
unsigned char var_11 = (unsigned char)249;
long long int var_12 = -1832973469534544584LL;
short var_13 = (short)28765;
short var_14 = (short)-2469;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
