#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1877577824;
unsigned char var_1 = (unsigned char)38;
short var_2 = (short)-31253;
short var_3 = (short)-11570;
signed char var_5 = (signed char)-43;
unsigned short var_9 = (unsigned short)46944;
long long int var_10 = 1517862617725585620LL;
int zero = 0;
unsigned short var_11 = (unsigned short)25084;
int var_12 = -1690562378;
int var_13 = -1568522956;
int var_14 = 1275384326;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
