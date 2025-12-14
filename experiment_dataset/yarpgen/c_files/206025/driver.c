#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned char var_1 = (unsigned char)219;
int var_4 = -1645692507;
unsigned int var_8 = 2124781569U;
long long int var_10 = 8817010737833303761LL;
unsigned char var_13 = (unsigned char)86;
int zero = 0;
signed char var_14 = (signed char)96;
int var_15 = -91501292;
int var_16 = 143223313;
short var_17 = (short)19040;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
