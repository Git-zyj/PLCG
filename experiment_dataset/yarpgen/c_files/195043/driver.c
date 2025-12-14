#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8182755976115975563LL;
unsigned short var_6 = (unsigned short)32981;
short var_7 = (short)-2867;
unsigned char var_11 = (unsigned char)134;
int zero = 0;
short var_13 = (short)6395;
unsigned char var_14 = (unsigned char)26;
unsigned int var_15 = 1203031570U;
short var_16 = (short)-27529;
void init() {
}

void checksum() {
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
