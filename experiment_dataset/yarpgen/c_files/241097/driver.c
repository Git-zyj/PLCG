#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8344772926523743001LL;
signed char var_3 = (signed char)-17;
short var_7 = (short)-7955;
int zero = 0;
unsigned char var_16 = (unsigned char)174;
short var_17 = (short)-5411;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
