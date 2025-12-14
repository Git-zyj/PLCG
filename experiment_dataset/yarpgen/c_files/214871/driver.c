#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3022410555864601273LL;
unsigned short var_10 = (unsigned short)8876;
long long int var_14 = 2658263846605386228LL;
signed char var_16 = (signed char)-87;
int zero = 0;
short var_17 = (short)14560;
unsigned char var_18 = (unsigned char)8;
unsigned char var_19 = (unsigned char)38;
long long int var_20 = -3540576442459051026LL;
signed char var_21 = (signed char)-96;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
