#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25954;
unsigned char var_6 = (unsigned char)110;
unsigned char var_8 = (unsigned char)183;
unsigned long long int var_10 = 14443000389882197746ULL;
short var_11 = (short)16717;
int zero = 0;
unsigned int var_14 = 3240316880U;
unsigned int var_15 = 969453234U;
short var_16 = (short)-29642;
void init() {
}

void checksum() {
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
