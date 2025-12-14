#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 652014490;
unsigned long long int var_8 = 9577388649450641156ULL;
int var_10 = 1030392477;
short var_17 = (short)-29439;
int zero = 0;
unsigned int var_18 = 738610705U;
unsigned char var_19 = (unsigned char)224;
short var_20 = (short)27299;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
