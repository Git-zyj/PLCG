#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)16;
signed char var_10 = (signed char)6;
short var_11 = (short)16133;
short var_12 = (short)-11512;
int zero = 0;
unsigned short var_17 = (unsigned short)46388;
unsigned char var_18 = (unsigned char)69;
long long int var_19 = 7026100443254592701LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
