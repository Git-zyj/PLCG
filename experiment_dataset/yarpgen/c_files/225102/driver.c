#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15293189225764018525ULL;
short var_2 = (short)-31741;
unsigned short var_5 = (unsigned short)18612;
short var_6 = (short)20301;
short var_7 = (short)-1452;
unsigned short var_9 = (unsigned short)19494;
signed char var_11 = (signed char)106;
int zero = 0;
unsigned short var_12 = (unsigned short)63205;
unsigned int var_13 = 120381888U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
