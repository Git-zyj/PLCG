#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5191;
int var_4 = 647251328;
int var_5 = -717656269;
unsigned short var_9 = (unsigned short)19161;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)35036;
short var_20 = (short)-20537;
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
