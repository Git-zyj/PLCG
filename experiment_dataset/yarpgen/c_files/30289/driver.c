#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
short var_5 = (short)-10776;
long long int var_12 = -1322968043031252459LL;
long long int var_13 = -7949618842232862317LL;
int zero = 0;
int var_19 = -2091249444;
unsigned char var_20 = (unsigned char)195;
short var_21 = (short)-21292;
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
