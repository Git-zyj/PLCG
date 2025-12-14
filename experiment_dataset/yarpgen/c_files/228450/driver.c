#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
long long int var_2 = 6870525037823557323LL;
short var_3 = (short)27345;
int zero = 0;
int var_14 = -808680912;
unsigned char var_15 = (unsigned char)214;
signed char var_16 = (signed char)-107;
long long int var_17 = -5107736890646123907LL;
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
