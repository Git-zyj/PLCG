#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 177418579;
unsigned short var_2 = (unsigned short)13280;
unsigned char var_4 = (unsigned char)16;
unsigned short var_5 = (unsigned short)32643;
unsigned char var_6 = (unsigned char)173;
int var_8 = -1461995507;
int var_9 = 1146738058;
int var_14 = -401294850;
unsigned short var_16 = (unsigned short)62452;
unsigned char var_17 = (unsigned char)61;
int zero = 0;
int var_18 = -1086960081;
unsigned char var_19 = (unsigned char)215;
signed char var_20 = (signed char)-33;
unsigned int var_21 = 3802046779U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
