#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-20765;
unsigned char var_9 = (unsigned char)238;
short var_11 = (short)20352;
unsigned int var_13 = 3532799279U;
unsigned char var_16 = (unsigned char)117;
short var_18 = (short)-12303;
int zero = 0;
unsigned char var_19 = (unsigned char)228;
short var_20 = (short)-24849;
short var_21 = (short)-16098;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
