#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23376;
unsigned short var_4 = (unsigned short)46911;
unsigned short var_9 = (unsigned short)44062;
unsigned short var_10 = (unsigned short)49891;
unsigned short var_11 = (unsigned short)4992;
unsigned short var_12 = (unsigned short)54772;
unsigned short var_13 = (unsigned short)10748;
unsigned short var_15 = (unsigned short)49368;
unsigned short var_19 = (unsigned short)62884;
int zero = 0;
unsigned short var_20 = (unsigned short)51336;
unsigned short var_21 = (unsigned short)16168;
unsigned short var_22 = (unsigned short)24057;
void init() {
}

void checksum() {
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
