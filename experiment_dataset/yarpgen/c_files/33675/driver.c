#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
long long int var_4 = -7166567555455824429LL;
long long int var_8 = 5179639359609965223LL;
short var_9 = (short)22931;
signed char var_11 = (signed char)-54;
unsigned short var_12 = (unsigned short)27433;
int zero = 0;
signed char var_14 = (signed char)108;
short var_15 = (short)-16246;
unsigned char var_16 = (unsigned char)78;
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
