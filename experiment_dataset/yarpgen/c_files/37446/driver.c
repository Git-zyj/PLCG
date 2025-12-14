#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)3466;
unsigned short var_12 = (unsigned short)21917;
short var_14 = (short)-28700;
int zero = 0;
unsigned long long int var_19 = 7473540742042996606ULL;
int var_20 = -1488600154;
unsigned long long int var_21 = 1337901295479349282ULL;
int var_22 = 1109337576;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
