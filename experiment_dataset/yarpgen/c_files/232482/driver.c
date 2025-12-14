#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22406;
unsigned char var_5 = (unsigned char)53;
unsigned int var_9 = 1302142712U;
signed char var_11 = (signed char)-112;
int zero = 0;
short var_12 = (short)27737;
unsigned short var_13 = (unsigned short)58192;
signed char var_14 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
