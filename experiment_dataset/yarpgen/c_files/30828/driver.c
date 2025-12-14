#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)229;
unsigned char var_8 = (unsigned char)237;
unsigned char var_9 = (unsigned char)164;
short var_11 = (short)-14825;
unsigned short var_17 = (unsigned short)57071;
int zero = 0;
short var_20 = (short)-26015;
int var_21 = 118226664;
int var_22 = -256444309;
short var_23 = (short)-18000;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
