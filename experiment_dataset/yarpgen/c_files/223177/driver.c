#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)74;
unsigned char var_3 = (unsigned char)67;
unsigned char var_6 = (unsigned char)222;
unsigned short var_7 = (unsigned short)53674;
short var_10 = (short)9944;
signed char var_13 = (signed char)-109;
short var_14 = (short)-21728;
int zero = 0;
unsigned int var_17 = 392798707U;
unsigned int var_18 = 2415950159U;
unsigned short var_19 = (unsigned short)47643;
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
