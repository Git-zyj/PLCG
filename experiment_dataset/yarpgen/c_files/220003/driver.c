#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)15125;
long long int var_13 = 1571833927609188940LL;
short var_14 = (short)-5229;
int zero = 0;
unsigned char var_18 = (unsigned char)66;
unsigned char var_19 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
