#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61743;
short var_7 = (short)-10184;
unsigned short var_10 = (unsigned short)35564;
int var_12 = -462694330;
int zero = 0;
unsigned short var_13 = (unsigned short)14365;
unsigned long long int var_14 = 5098977068414916008ULL;
void init() {
}

void checksum() {
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
