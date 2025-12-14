#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1076211757;
short var_1 = (short)-1985;
unsigned int var_7 = 1552255557U;
unsigned int var_12 = 1946882038U;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 1269954676U;
unsigned int var_16 = 461149821U;
int zero = 0;
unsigned int var_17 = 1922422952U;
unsigned char var_18 = (unsigned char)226;
signed char var_19 = (signed char)-52;
short var_20 = (short)18576;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
