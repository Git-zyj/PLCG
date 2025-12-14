#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)29613;
unsigned short var_11 = (unsigned short)10509;
unsigned short var_12 = (unsigned short)26879;
int zero = 0;
int var_15 = -1524886816;
unsigned char var_16 = (unsigned char)243;
signed char var_17 = (signed char)108;
signed char var_18 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
