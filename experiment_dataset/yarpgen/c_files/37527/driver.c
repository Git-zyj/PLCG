#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12387;
unsigned long long int var_3 = 12545093305300729647ULL;
unsigned short var_4 = (unsigned short)10010;
long long int var_5 = 3592606433532575313LL;
unsigned long long int var_9 = 11337176248158818208ULL;
unsigned char var_10 = (unsigned char)82;
unsigned short var_11 = (unsigned short)55711;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
long long int var_13 = 1972106614876711944LL;
signed char var_14 = (signed char)21;
_Bool var_15 = (_Bool)0;
long long int var_16 = 2607880592289961371LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
