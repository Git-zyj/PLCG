#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29757;
unsigned int var_5 = 3309170778U;
signed char var_7 = (signed char)-97;
unsigned int var_8 = 4049803289U;
unsigned long long int var_9 = 14145636456691267454ULL;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)67;
int zero = 0;
unsigned char var_14 = (unsigned char)148;
unsigned int var_15 = 2123290295U;
short var_16 = (short)-10214;
void init() {
}

void checksum() {
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
