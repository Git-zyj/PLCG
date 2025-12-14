#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11431;
short var_4 = (short)-28778;
short var_5 = (short)-11112;
short var_9 = (short)27868;
unsigned short var_10 = (unsigned short)1462;
int zero = 0;
short var_12 = (short)-25480;
unsigned long long int var_13 = 1701040654995922008ULL;
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
