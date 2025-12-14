#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1774802809;
unsigned short var_7 = (unsigned short)16711;
int var_8 = 1059380323;
short var_9 = (short)-29034;
int zero = 0;
unsigned short var_10 = (unsigned short)51824;
unsigned short var_11 = (unsigned short)17235;
unsigned short var_12 = (unsigned short)10012;
unsigned short var_13 = (unsigned short)21060;
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
