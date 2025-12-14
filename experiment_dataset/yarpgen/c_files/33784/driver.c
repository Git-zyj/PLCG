#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
int var_4 = -813230460;
int var_8 = -1390939340;
unsigned long long int var_9 = 7362252138513449520ULL;
long long int var_10 = -7248442419944789791LL;
unsigned int var_13 = 1723198770U;
short var_15 = (short)-24485;
int zero = 0;
unsigned char var_19 = (unsigned char)71;
long long int var_20 = -2448087597374072010LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
