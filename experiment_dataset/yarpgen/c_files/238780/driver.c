#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60909;
unsigned short var_2 = (unsigned short)19052;
short var_3 = (short)10612;
unsigned int var_6 = 2806311358U;
unsigned char var_8 = (unsigned char)91;
unsigned char var_9 = (unsigned char)229;
int var_11 = 1109924009;
int zero = 0;
int var_12 = 133241881;
int var_13 = -549404186;
int var_14 = 143577974;
int var_15 = -1351390122;
short var_16 = (short)-6318;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
