#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30172;
int var_1 = 187817520;
unsigned short var_2 = (unsigned short)39460;
unsigned short var_6 = (unsigned short)18497;
int var_7 = -591359680;
int var_11 = -284389723;
short var_13 = (short)4905;
int zero = 0;
short var_14 = (short)25944;
unsigned short var_15 = (unsigned short)18890;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
