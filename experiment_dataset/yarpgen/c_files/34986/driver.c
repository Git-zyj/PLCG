#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)844;
unsigned short var_8 = (unsigned short)17664;
int var_12 = -1772721142;
int var_13 = -1842457423;
unsigned int var_16 = 1385611252U;
unsigned char var_17 = (unsigned char)152;
signed char var_18 = (signed char)-86;
int zero = 0;
unsigned char var_19 = (unsigned char)72;
int var_20 = 945513701;
unsigned int var_21 = 1331444670U;
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
