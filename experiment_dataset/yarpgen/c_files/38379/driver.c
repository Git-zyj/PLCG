#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1842128806;
unsigned short var_2 = (unsigned short)42859;
int var_3 = 831730981;
unsigned short var_4 = (unsigned short)6451;
int var_5 = -1882331643;
int var_7 = -67835460;
int var_8 = -821071721;
int zero = 0;
unsigned short var_12 = (unsigned short)44338;
int var_13 = 580219446;
void init() {
}

void checksum() {
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
