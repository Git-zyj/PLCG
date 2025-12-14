#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
unsigned short var_4 = (unsigned short)48349;
signed char var_15 = (signed char)-58;
int var_19 = -715236611;
int zero = 0;
int var_20 = 597131194;
unsigned short var_21 = (unsigned short)14845;
short var_22 = (short)-11986;
unsigned char var_23 = (unsigned char)109;
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
