#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26953;
unsigned short var_8 = (unsigned short)10907;
unsigned int var_9 = 812381428U;
short var_10 = (short)10538;
unsigned short var_11 = (unsigned short)21154;
int zero = 0;
unsigned char var_13 = (unsigned char)125;
unsigned char var_14 = (unsigned char)132;
void init() {
}

void checksum() {
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
