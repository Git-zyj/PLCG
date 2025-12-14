#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1953807506;
long long int var_3 = -2268368696951653122LL;
short var_4 = (short)-27161;
unsigned short var_5 = (unsigned short)55134;
int var_6 = 162462795;
int var_7 = 1939513804;
int var_12 = -1551673800;
int zero = 0;
long long int var_19 = -4735662782271767318LL;
unsigned short var_20 = (unsigned short)35032;
signed char var_21 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
