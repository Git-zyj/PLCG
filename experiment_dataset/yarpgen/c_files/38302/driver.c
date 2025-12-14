#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 38973320;
unsigned short var_8 = (unsigned short)10368;
unsigned long long int var_13 = 11710809565179888478ULL;
int zero = 0;
short var_14 = (short)31622;
unsigned int var_15 = 1797385664U;
unsigned long long int var_16 = 5490250095356797598ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
