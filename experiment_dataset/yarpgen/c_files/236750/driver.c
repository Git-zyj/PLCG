#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3070946056U;
unsigned long long int var_4 = 9214766510117541945ULL;
unsigned int var_7 = 957851654U;
unsigned int var_8 = 3960428508U;
int var_9 = -733803057;
unsigned char var_10 = (unsigned char)95;
int zero = 0;
short var_14 = (short)25126;
unsigned long long int var_15 = 10145972605762361942ULL;
unsigned short var_16 = (unsigned short)58403;
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
