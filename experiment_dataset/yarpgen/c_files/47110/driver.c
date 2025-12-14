#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)117;
signed char var_9 = (signed char)45;
unsigned char var_11 = (unsigned char)75;
signed char var_14 = (signed char)5;
int zero = 0;
short var_16 = (short)23247;
signed char var_17 = (signed char)-47;
long long int var_18 = 8162841063134656744LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
