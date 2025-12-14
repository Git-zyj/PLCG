#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15803618152998579021ULL;
unsigned short var_1 = (unsigned short)15855;
unsigned short var_5 = (unsigned short)42397;
unsigned char var_7 = (unsigned char)74;
int var_8 = 1629486434;
unsigned char var_10 = (unsigned char)54;
unsigned char var_14 = (unsigned char)254;
unsigned short var_15 = (unsigned short)59977;
short var_18 = (short)18827;
int zero = 0;
signed char var_19 = (signed char)102;
unsigned char var_20 = (unsigned char)231;
short var_21 = (short)17983;
unsigned char var_22 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
