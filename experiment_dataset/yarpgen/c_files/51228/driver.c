#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)109;
unsigned long long int var_4 = 11628621973674098693ULL;
unsigned int var_5 = 602480982U;
unsigned char var_9 = (unsigned char)21;
unsigned char var_11 = (unsigned char)151;
unsigned int var_12 = 1027787621U;
int zero = 0;
unsigned short var_16 = (unsigned short)29764;
short var_17 = (short)-27564;
void init() {
}

void checksum() {
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
